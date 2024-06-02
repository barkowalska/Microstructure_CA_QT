#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"Rules.h"
#include"postProc.h"
#include<fstream>
#include<stdexcept>
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    connect(ui->nucleate, &QPushButton::clicked, this, &MainWindow::OnNucleationClick);
    ui->mean_grains_size->setReadOnly(true);
    ui->standard_deviation->setReadOnly(true);
    ui->time->setReadOnly(true);
    ui->porosity->setReadOnly(true);
    ui->RUN_CA->setEnabled(false);
    ui->RUN_MC->setEnabled(false);
    ui->export_2->setEnabled(false);
    connect(ui->RUN_CA, &QPushButton::clicked, this, &MainWindow::OnRUN_CA);
    connect(ui->RUN_MC, &QPushButton::clicked, this, &MainWindow::OnRUN_MC);
    connect(ui->erase_ID, &QPushButton::clicked, this, &MainWindow::OnEraseID);
    connect(ui->erase_random, &QPushButton::clicked, this, &MainWindow::OnErase);
    connect(ui->transform, &QPushButton::clicked, this, &MainWindow::OnTransform);
    connect(ui->export_2, &QPushButton::clicked, this, &MainWindow::OnExport);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnNucleationClick()
{
    int x,y,z;
    x = ui->sizeX->text().toInt();
    y = ui->sizeY->text().toInt();
    z = ui->sizeZ->text().toInt();
    simulation = std::shared_ptr<Simulation>(new Simulation(x,y,z));
    QString nucleationType= ui->nucleation_type->currentText();
    int grainsNumber=ui->grains_number->text().toInt();
    simulation->domain().setGrainNumber(grainsNumber);
    if(nucleationType=="Random") simulation->domain().nucleation_random();
    else if(nucleationType=="Uniform") simulation->domain().nucleation_uniform();
    updateGUI();
    ui->RUN_CA->setEnabled(true);
    ui->RUN_MC->setEnabled(true);
    ui->export_2->setEnabled(true);
}
void MainWindow::OnRUN_CA()
{
    ui->RUN_CA->setEnabled(false);
    setNeighbourhood();
    setBC();
    setIteration();
    simulation->rule(std::shared_ptr<Rules>(new MaxNumber));

    time.startTime();
    simulation->run();
    time.stopTime();

    updateGUI();
    ui->RUN_CA->setEnabled(true);
}
void MainWindow::OnRUN_MC()
{
    ui->RUN_MC->setEnabled(false);
    setNeighbourhood();
    setBC();
    setIteration();
    simulation->rule(std::shared_ptr<Rules>(new Energy));
    time.startTime();
    simulation->randomCel();
    time.stopTime();
    updateGUI();
    ui->RUN_MC->setEnabled(true);
}
void MainWindow::OnEraseID()
{
    int id = ui->erase_ID->text().toInt();
    int k;
    for (int z = 0; z < simulation->domain().getDimZ(); z++)
        for (int y = 0; y < simulation->domain().getDimY(); y++)
            for (int x = 0; x < simulation->domain().getDimX(); x++)
            {
                k = simulation->domain()(x, y, z);
                if (k == id) simulation->domain()(x, y, z) = 0;
            }
    updateGUI();
}
void MainWindow::OnErase()
{
    int id = 0;
    for(int i = 0; i < simulation->domain().getGrainNumber()*4; i++)
    {
        id = std::rand() % simulation->domain().getGrainNumber();
        if(erased_id.emplace(id).second)
        {
            break;
        }
    }
    int k;
    for (int z = 0; z < simulation->domain().getDimZ(); z++)
        for (int y = 0; y < simulation->domain().getDimY(); y++)
            for (int x = 0; x < simulation->domain().getDimX(); x++)
            {
                k = simulation->domain()(x, y, z);
                if (k == id) simulation->domain()(x, y, z) = 0;
            }
    updateGUI();

}
void MainWindow::OnTransform()
{
    for (int z = 0; z < simulation->domain().getDimZ(); z++)
        for (int y = 0; y < simulation->domain().getDimY(); y++)
            for (int x = 0; x < simulation->domain().getDimX(); x++)
            {
                if (simulation->domain()(x, y, z) != 0) simulation->domain()(x, y, z) = 0;
                else if (simulation->domain()(x, y, z) == 0) simulation->domain()(x, y, z) = 1;
            }
    updateGUI();
}

void MainWindow::setNeighbourhood()
{
    QString neighbourhood=ui->neighbourhood->currentText();
    if(neighbourhood=="Moore") simulation->neighbour(std::shared_ptr<Neighbours>(new Moore));
    else if(neighbourhood=="Random") simulation->neighbour(std::shared_ptr<Neighbours>(new Random));
    else if(neighbourhood=="Neumann") simulation->neighbour(std::shared_ptr<Neighbours>(new VonNeumann));
}
void MainWindow::setBC()
{
    QString bc= ui->boundry_condition->currentText();
    if(bc=="Periodic")
    simulation->domain().setBc(boundryCondition::periodic);
    else if(bc=="Absorbtion") simulation->domain().setBc(boundryCondition::absorbtion);

}
void MainWindow::setIteration()
{
    int iteration =ui->Iteration->text().toInt();
    simulation->setIterations(iteration);
}

void MainWindow::setupScene()
{
    picture(simulation->domain(), "C:\\Users\\jkowa\\Documents\\MicroGenerationQT\\imgs\\result.bmp");
    scene.clear();
    pix.load("C:\\Users\\jkowa\\Documents\\MicroGenerationQT\\imgs\\result.bmp");
    if(ui->graphicsView->width() / pix.width() < ui->graphicsView->height() / pix.height())
        pix = pix.scaledToWidth(ui->graphicsView->width()*0.8);
    else
        pix = pix.scaledToWidth(ui->graphicsView->height()*0.8);

    scene.addPixmap(pix);
}

void MainWindow::statistics()
{
    GrainSize size;
    GrainSize::Statistics stat = size.measure(simulation->domain());
    ui->mean_grains_size->setText(QString::number(stat.mean));
    ui->standard_deviation->setText(QString::number(stat.stddev));

    ui->porosity->setText(QString::number(size.porosity()));
    ui->time->setText(QString::number(time.miliseconds()));

}

void MainWindow::OnExport()
{
    std::ofstream file;
    file.open("C:\\Users\\jkowa\\Documents\\MicroGenerationQT\\ovito_format.txt");
    file << simulation->domain().getDimX() * simulation->domain().getDimY() * simulation->domain().getDimZ() << std::endl;
    file << std::endl;
    for (int z = 0; z < simulation->domain().getDimZ(); z++)
        for (int y = 0; y < simulation->domain().getDimY(); y++)
            for (int x = 0; x < simulation->domain().getDimX(); x++)
            {
                file << x << ' ' << y << ' ' << z << ' ' << simulation->domain()(x,y,z) << std::endl;
            }
    file.close();
}
