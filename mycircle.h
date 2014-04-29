#ifndef MYCIRCLE_H
#define MYCIRCLE_H

#include <QDialog>
#include <QGraphicsScene>

namespace Ui {
class MyCircle;
}

class MyCircle : public QDialog
{
    Q_OBJECT

public:
    explicit MyCircle(QWidget *parent = 0);
    ~MyCircle();

private slots:
    void on_draw_circle_clicked();

private:
    Ui::MyCircle *ui;
    QGraphicsScene *scene;
};

#endif // MYCIRCLE_H
