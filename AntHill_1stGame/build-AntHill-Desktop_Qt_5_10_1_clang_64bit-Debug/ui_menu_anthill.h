/********************************************************************************
** Form generated from reading UI file 'menu_anthill.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_ANTHILL_H
#define UI_MENU_ANTHILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu_anthill
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu_anthill)
    {
        if (Menu_anthill->objectName().isEmpty())
            Menu_anthill->setObjectName(QStringLiteral("Menu_anthill"));
        Menu_anthill->resize(800, 600);
        centralwidget = new QWidget(Menu_anthill);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(260, 30, 271, 51));
        Menu_anthill->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu_anthill);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Menu_anthill->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu_anthill);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Menu_anthill->setStatusBar(statusbar);

        retranslateUi(Menu_anthill);

        QMetaObject::connectSlotsByName(Menu_anthill);
    } // setupUi

    void retranslateUi(QMainWindow *Menu_anthill)
    {
        Menu_anthill->setWindowTitle(QApplication::translate("Menu_anthill", "MainWindow", nullptr));
        textBrowser->setHtml(QApplication::translate("Menu_anthill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600; font-style:italic; text-decoration: underline; color:#996633;\">Ast\303\251rix le Gaulois</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_anthill: public Ui_Menu_anthill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_ANTHILL_H
