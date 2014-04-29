#include "mycircle.h"
#include "ui_mycircle.h"

MyCircle::MyCircle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyCircle)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(Qt::black));
    scene->setSceneRect(QRect(QPoint(0, 0),QPoint(ui->graphicsView->width(),ui->graphicsView->height()))); //make the scene fill up the graphics view
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setScene(scene);
}

MyCircle::~MyCircle()
{
    delete ui;
}

void MyCircle::on_draw_circle_clicked()
{
    int x1 = ui->center_x->text().toInt();
    int y1 = ui->center_y->text().toInt();
    double radius = ui->radius->text().toDouble();
    scene->addEllipse(x1,y1,radius,radius,QPen(QBrush(Qt::white),1));
}
