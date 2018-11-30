#-------------------------------------------------
#
# Project created by QtCreator 2018-04-07T12:22:34
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = AntHill
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        map.cpp \
    elements.cpp \
    game.cpp \
    food.cpp \
    ennemy.cpp \
    gaulois.cpp \
    menu_anthill.cpp \
    health.cpp \
    duree.cpp \
    gold.cpp \
    boutton.cpp

HEADERS += \
        map.h \
    elements.h \
    game.h \
    food.h \
    ennemy.h \
    menu_anthill.h \
    gaulois.h \
    menu_anthill.h \
    health.h \
    duree.h \
    gold.h \
    boutton.h

FORMS += \
    menu_anthill.ui

RESOURCES += \
    ressources.qrc
