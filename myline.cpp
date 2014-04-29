#include "myline.h"
#include "ui_myline.h"

MyLine::MyLine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyLine)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(Qt::black));
    scene->setSceneRect(QRect(QPoint(0, 0),QPoint(ui->graphicsView->width(),ui->graphicsView->height()))); //make the scene fill up the graphics view
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setScene(scene);
}

MyLine::~MyLine()
{
    delete ui;
}

void MyLine::on_draw_line_clicked()
{
    int x1 = ui->x1->text().toInt();
    int y1 = ui->y1->text().toInt();
    int x2 = ui->x2->text().toInt();
    int y2 = ui->y2->text().toInt();

    scene->addLine(x1, y1, x2, y2, QPen(QBrush(Qt::white),1));
}
