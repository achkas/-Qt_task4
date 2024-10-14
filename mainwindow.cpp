#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->groupBox->setTitle("Выбор");
    ui->radioButton->setText("Да");
    ui->radioButton->setChecked(true);
    ui->radioButton_2->setText("Нет");


    for (int i = 0; i < 10; ++i)
    {
        ui->Mylist->addItem(QString("element %1").arg(i));
    }

    ui->MyButton->setText("Старт");
    ui->MyButton->setCheckable(1);

    ui->MyprogressBar->setMinimum(0);
    ui->MyprogressBar->setMaximum(10);
    ui->MyprogressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}



int val=0;

void MainWindow::on_MyButton_clicked()
{
    if(val!=10)
    {
        val++;
        ui->MyprogressBar->setValue(val);
    }

    else
    {
        val=0;
        val++;
        ui->MyprogressBar->setValue(val);
    }

    //qDebug("Value ");
}




