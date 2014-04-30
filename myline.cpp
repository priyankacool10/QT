#include "myline.h"
#include "ui_myline.h"
#include <QMouseEvent>
#include <QGraphicsView>

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

   // ui->graphicsView->setMouseTracking(1);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setMouseTracking(1);
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

    scene->addLine(x1, y1, x2, y2, QPen(QBrush(Qt::black),1));
}

void MyLine::mousePressEvent(QMouseEvent *e){

  // if (e->button() == Qt::LeftButton) {
       //QPointF point= ui->graphicsView->mapToScene(e->x(),e->y());
       lastPointx = e->x();
        lastPointy =e->y();
        scribbling = true;

   //}

}
void MyLine::mouseMoveEvent(QMouseEvent *event)
 {
     //if ((event->buttons() & Qt::LeftButton) && scribbling)
 //        drawLineTo(event->x(),event->y());
 }

 void MyLine::mouseReleaseEvent(QMouseEvent *event)
 {
     //if (event->button() == Qt::LeftButton && scribbling) {
         drawLineTo(event->x(),event->y());
         scribbling = false;
     //}
 }

 void MyLine::drawLineTo(int x, int y)
 {
    scene->addLine(lastPointx,lastPointy,x,y, QPen(QBrush(Qt::white),1));
     //painter.drawLine(lastPoint, endPoint);
    // modified = true;

//     int rad = (myPenWidth / 2) + 2;
  //   update(QRect(lastPoint, endPoint).normalized()
                                     // .adjusted(-rad, -rad, +rad, +rad));
     lastPointx = x;
     lastPointy = y;
 }
