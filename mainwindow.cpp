#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myline.h"
#include "mycircle.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_draw_line_clicked()
{
    line = new MyLine(this);
    line->show();
}

void MainWindow::on_draw_circle_clicked()
{
    circle = new MyCircle(this);
    circle->show();
}
