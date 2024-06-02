/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLineEdit *sizeX;
    QLineEdit *sizeY;
    QLineEdit *sizeZ;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *nucleation_type;
    QLabel *label_5;
    QLineEdit *grains_number;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *neighbourhood;
    QPushButton *RUN_CA;
    QLabel *label_8;
    QFrame *line;
    QSpinBox *Iteration;
    QLabel *label_10;
    QLineEdit *ID_input;
    QPushButton *erase_ID;
    QPushButton *erase_random;
    QLabel *label_9;
    QPushButton *transform;
    QPushButton *RUN_MC;
    QPushButton *nucleate;
    QLabel *label_11;
    QComboBox *boundry_condition;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *mean_grains_size;
    QLineEdit *standard_deviation;
    QLineEdit *porosity;
    QLineEdit *time;
    QFrame *line_2;
    QPushButton *export_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1407, 697);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(70, 30, 721, 431));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(830, 60, 61, 21));
        sizeX = new QLineEdit(centralwidget);
        sizeX->setObjectName(QString::fromUtf8("sizeX"));
        sizeX->setGeometry(QRect(890, 60, 91, 20));
        sizeY = new QLineEdit(centralwidget);
        sizeY->setObjectName(QString::fromUtf8("sizeY"));
        sizeY->setGeometry(QRect(1080, 60, 91, 20));
        sizeZ = new QLineEdit(centralwidget);
        sizeZ->setObjectName(QString::fromUtf8("sizeZ"));
        sizeZ->setGeometry(QRect(1252, 60, 81, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1020, 60, 37, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1200, 60, 21, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(830, 120, 101, 21));
        nucleation_type = new QComboBox(centralwidget);
        nucleation_type->addItem(QString());
        nucleation_type->addItem(QString());
        nucleation_type->setObjectName(QString::fromUtf8("nucleation_type"));
        nucleation_type->setGeometry(QRect(1090, 120, 241, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(830, 160, 91, 21));
        grains_number = new QLineEdit(centralwidget);
        grains_number->setObjectName(QString::fromUtf8("grains_number"));
        grains_number->setGeometry(QRect(1090, 160, 241, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(830, 260, 121, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(830, 300, 111, 21));
        neighbourhood = new QComboBox(centralwidget);
        neighbourhood->addItem(QString());
        neighbourhood->addItem(QString());
        neighbourhood->addItem(QString());
        neighbourhood->setObjectName(QString::fromUtf8("neighbourhood"));
        neighbourhood->setGeometry(QRect(1110, 300, 231, 22));
        RUN_CA = new QPushButton(centralwidget);
        RUN_CA->setObjectName(QString::fromUtf8("RUN_CA"));
        RUN_CA->setGeometry(QRect(950, 390, 80, 18));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1040, 20, 121, 21));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(830, 420, 501, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Iteration = new QSpinBox(centralwidget);
        Iteration->setObjectName(QString::fromUtf8("Iteration"));
        Iteration->setGeometry(QRect(1110, 330, 231, 22));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1050, 450, 51, 16));
        ID_input = new QLineEdit(centralwidget);
        ID_input->setObjectName(QString::fromUtf8("ID_input"));
        ID_input->setGeometry(QRect(830, 480, 171, 20));
        erase_ID = new QPushButton(centralwidget);
        erase_ID->setObjectName(QString::fromUtf8("erase_ID"));
        erase_ID->setGeometry(QRect(1040, 480, 80, 18));
        erase_random = new QPushButton(centralwidget);
        erase_random->setObjectName(QString::fromUtf8("erase_random"));
        erase_random->setGeometry(QRect(1160, 480, 141, 18));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1000, 520, 191, 20));
        transform = new QPushButton(centralwidget);
        transform->setObjectName(QString::fromUtf8("transform"));
        transform->setGeometry(QRect(830, 560, 471, 20));
        RUN_MC = new QPushButton(centralwidget);
        RUN_MC->setObjectName(QString::fromUtf8("RUN_MC"));
        RUN_MC->setGeometry(QRect(1100, 390, 80, 18));
        nucleate = new QPushButton(centralwidget);
        nucleate->setObjectName(QString::fromUtf8("nucleate"));
        nucleate->setGeometry(QRect(950, 210, 271, 20));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(830, 330, 121, 16));
        boundry_condition = new QComboBox(centralwidget);
        boundry_condition->addItem(QString());
        boundry_condition->addItem(QString());
        boundry_condition->setObjectName(QString::fromUtf8("boundry_condition"));
        boundry_condition->setGeometry(QRect(1110, 260, 231, 22));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(410, 480, 71, 21));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(100, 510, 101, 16));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(300, 510, 111, 16));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(530, 510, 51, 21));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(680, 510, 37, 12));
        mean_grains_size = new QLineEdit(centralwidget);
        mean_grains_size->setObjectName(QString::fromUtf8("mean_grains_size"));
        mean_grains_size->setEnabled(true);
        mean_grains_size->setGeometry(QRect(90, 560, 113, 20));
        standard_deviation = new QLineEdit(centralwidget);
        standard_deviation->setObjectName(QString::fromUtf8("standard_deviation"));
        standard_deviation->setEnabled(true);
        standard_deviation->setGeometry(QRect(290, 560, 113, 20));
        porosity = new QLineEdit(centralwidget);
        porosity->setObjectName(QString::fromUtf8("porosity"));
        porosity->setEnabled(true);
        porosity->setGeometry(QRect(490, 560, 113, 20));
        time = new QLineEdit(centralwidget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setEnabled(true);
        time->setGeometry(QRect(650, 560, 113, 20));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(790, 490, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        export_2 = new QPushButton(centralwidget);
        export_2->setObjectName(QString::fromUtf8("export_2"));
        export_2->setGeometry(QRect(590, 470, 191, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1407, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Size: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nucleation type", nullptr));
        nucleation_type->setItemText(0, QCoreApplication::translate("MainWindow", "Random", nullptr));
        nucleation_type->setItemText(1, QCoreApplication::translate("MainWindow", "Uniform", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Grain's Number", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Boundry Condition", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Neighbourhood", nullptr));
        neighbourhood->setItemText(0, QCoreApplication::translate("MainWindow", "Random", nullptr));
        neighbourhood->setItemText(1, QCoreApplication::translate("MainWindow", "Moore", nullptr));
        neighbourhood->setItemText(2, QCoreApplication::translate("MainWindow", "Neuman", nullptr));

        RUN_CA->setText(QCoreApplication::translate("MainWindow", "RUN CA", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Generation Set Up", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        erase_ID->setText(QCoreApplication::translate("MainWindow", "Erase ID", nullptr));
        erase_random->setText(QCoreApplication::translate("MainWindow", "Erase Random ID", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Transform to porouse structure", nullptr));
        transform->setText(QCoreApplication::translate("MainWindow", "Transform", nullptr));
        RUN_MC->setText(QCoreApplication::translate("MainWindow", "RUN MC", nullptr));
        nucleate->setText(QCoreApplication::translate("MainWindow", "Nucleate", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Iterations number", nullptr));
        boundry_condition->setItemText(0, QCoreApplication::translate("MainWindow", "Periodic", nullptr));
        boundry_condition->setItemText(1, QCoreApplication::translate("MainWindow", "Absorption", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Statistics", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Mean Grain's Size", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Standard Deviation", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Porosity", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        export_2->setText(QCoreApplication::translate("MainWindow", "Export to Ovito", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
