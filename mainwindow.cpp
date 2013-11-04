#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->connect(this->ui->pushButton_2, SIGNAL(clicked()), this,SLOT(on_pushButton_2_clicked()));
    this->connect(this->ui->pushButton_3, SIGNAL(clicked()), this,SLOT(on_pushButton_3_clicked()));
    this->count=0;
    this->ui->lcdNumber->display(count);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton was clicked! " << std::endl;
}


void MainWindow::on_pushButton_2_clicked()
{
    count++;
    this->ui->lcdNumber->display(count);
}

void MainWindow::on_lcdNumber_overflow()
{

}
void MainWindow::on_pushButton_3_clicked()
{
    count--;
    this->ui->lcdNumber->display(count);
}
