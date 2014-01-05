/********************************************************************************
** Form generated from reading UI file 'cmainwindow.ui'
**
** Created: Sun 5. Jan 03:46:03 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINWINDOW_H
#define UI_CMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *buttonSend;
    QTextBrowser *textBrowserSms;
    QTextEdit *textEditSms;
    QLabel *label;
    QLineEdit *lineEditSms;
    QPushButton *buttonBrowse;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CMainWindow)
    {
        if (CMainWindow->objectName().isEmpty())
            CMainWindow->setObjectName(QString::fromUtf8("CMainWindow"));
        CMainWindow->resize(268, 335);
        centralWidget = new QWidget(CMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        buttonSend = new QPushButton(centralWidget);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));
        buttonSend->setGeometry(QRect(10, 260, 75, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        buttonSend->setFont(font);
        textBrowserSms = new QTextBrowser(centralWidget);
        textBrowserSms->setObjectName(QString::fromUtf8("textBrowserSms"));
        textBrowserSms->setGeometry(QRect(10, 70, 231, 131));
        textEditSms = new QTextEdit(centralWidget);
        textEditSms->setObjectName(QString::fromUtf8("textEditSms"));
        textEditSms->setGeometry(QRect(10, 210, 231, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 131, 16));
        lineEditSms = new QLineEdit(centralWidget);
        lineEditSms->setObjectName(QString::fromUtf8("lineEditSms"));
        lineEditSms->setGeometry(QRect(10, 30, 151, 20));
        buttonBrowse = new QPushButton(centralWidget);
        buttonBrowse->setObjectName(QString::fromUtf8("buttonBrowse"));
        buttonBrowse->setGeometry(QRect(170, 30, 75, 23));
        CMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 268, 21));
        CMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CMainWindow->setStatusBar(statusBar);

        retranslateUi(CMainWindow);

        QMetaObject::connectSlotsByName(CMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CMainWindow)
    {
        CMainWindow->setWindowTitle(QApplication::translate("CMainWindow", "CMainWindow", 0, QApplication::UnicodeUTF8));
        buttonSend->setText(QApplication::translate("CMainWindow", "Send", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CMainWindow", "Config file path", 0, QApplication::UnicodeUTF8));
        buttonBrowse->setText(QApplication::translate("CMainWindow", "Browse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMainWindow: public Ui_CMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINWINDOW_H
