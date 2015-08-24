/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonBuscar;
    QPushButton *pushButtonInsertar;
    QPushButton *pushButtonLeer;
    QLineEdit *lineEdit;
    QLineEdit *lineEditInsertar;
    QLineEdit *lineEditLeer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonBuscar = new QPushButton(centralWidget);
        pushButtonBuscar->setObjectName(QStringLiteral("pushButtonBuscar"));
        pushButtonBuscar->setGeometry(QRect(140, 10, 101, 23));
        pushButtonInsertar = new QPushButton(centralWidget);
        pushButtonInsertar->setObjectName(QStringLiteral("pushButtonInsertar"));
        pushButtonInsertar->setGeometry(QRect(140, 80, 101, 31));
        pushButtonLeer = new QPushButton(centralWidget);
        pushButtonLeer->setObjectName(QStringLiteral("pushButtonLeer"));
        pushButtonLeer->setGeometry(QRect(140, 160, 101, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 30, 211, 51));
        lineEditInsertar = new QLineEdit(centralWidget);
        lineEditInsertar->setObjectName(QStringLiteral("lineEditInsertar"));
        lineEditInsertar->setGeometry(QRect(90, 110, 211, 51));
        lineEditLeer = new QLineEdit(centralWidget);
        lineEditLeer->setObjectName(QStringLiteral("lineEditLeer"));
        lineEditLeer->setGeometry(QRect(90, 190, 211, 51));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButtonBuscar->setText(QApplication::translate("MainWindow", "BuscarImagen", 0));
        pushButtonInsertar->setText(QApplication::translate("MainWindow", "Insetar Mensaje", 0));
        pushButtonLeer->setText(QApplication::translate("MainWindow", "Leer Mensaje", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
