#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "csendsms.h"
#include "cconfig.h"

namespace Ui {
class CMainWindow;
}

class CMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CMainWindow(QWidget *parent = 0);
    ~CMainWindow();
    
private slots:
    void on_buttonSend_clicked();

    void on_buttonBrowse_clicked();

private:
    Ui::CMainWindow *ui;
    QString confPath;
    QList<QString> listConf;
};

#endif // CMAINWINDOW_H
