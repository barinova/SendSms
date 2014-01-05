#include "cmainwindow.h"
#include "ui_cmainwindow.h"

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMainWindow)
{
    ui->setupUi(this);
}

CMainWindow::~CMainWindow()
{
    delete ui;
}

void CMainWindow::on_buttonSend_clicked()
{
    CSendSms *sms = new CSendSms();
    if(!listConf.isEmpty() && !this->ui->textEditSms->toPlainText().isEmpty())
    {
        int errorCode = sms->sendSms(listConf.at(1), this->ui->textEditSms->toPlainText(), listConf.at(0));
        ui->textBrowserSms->append("Sending...");
        if(errorCode == 100)
        {
            ui->textBrowserSms->append("Successfully");
        }
        else
        {
            ui->textBrowserSms->append("Error");
        }
        this->ui->textEditSms->clear();
    }
}

void CMainWindow::on_buttonBrowse_clicked()
{
     confPath = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("CONF Files (*.conf)"));
     if(!confPath.isEmpty())
     {
         ui->lineEditSms->setText(confPath);
         CConfig *conf = new CConfig();
         listConf = conf->getConfig(confPath);
     }
}
