#ifndef MYLINE_H
#define MYLINE_H

#include <QDialog>
#include <QGraphicsScene>
namespace Ui {
class MyLine;
}

class MyLine : public QDialog
{
    Q_OBJECT

public:
    explicit MyLine(QWidget *parent = 0);
    ~MyLine();

private slots:
    void on_draw_line_clicked();

private:
    Ui::MyLine *ui;
    QGraphicsScene *scene;
};

#endif // MYLINE_H
