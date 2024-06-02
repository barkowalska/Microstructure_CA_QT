#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include<memory>
#include<set>
#include"Simulation.h"
#include"Stats.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void OnNucleationClick();
    void OnRUN_CA();
    void OnRUN_MC();
    void OnEraseID();
    void OnErase();
    void OnTransform();
    void OnExport();
private:
    Ui::MainWindow *ui;
    std::shared_ptr<Simulation> simulation;
    QPixmap pix;
    QGraphicsScene scene;
    TimeMeasurment time;
    //Numery usunietych ziaren
    std::set<int> erased_id;
    void setNeighbourhood();
    void setBC();
    void setIteration();
    void setupScene();
    void statistics();
    void updateGUI() {setupScene(); statistics();}
};
#endif // MAINWINDOW_H
