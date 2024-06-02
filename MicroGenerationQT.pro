QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    domain.cpp \
    EasyBMP.cpp \
    Neighbours.cpp \
    postProc.cpp \
    Rules.cpp \
    Simulation.cpp \
    Stats.cpp

HEADERS += \
    Basic_Datatypes.h \
    domain.h \
    EasyBMP.h \
    Neighbours.h \
    postProc.h \
    Rules.h \
    Simulation.h \
    Stats.h \
    mainwindow.h


FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
