#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void play_clicked();

    void on_life_clicked();

    void on_times_valueChanged(double arg1);

    void on_dial_valueChanged(int value);
    void as_i_see_clicked();
    void haiyuan_past_clicked();
    void yinhangmp3_clicked();

    void on_newhope_clicked();
    void shengcheng_clicked();
    void day_clicked();
    void night_clicked();
    void auto_solution_clicked();
    void haiyuan_clicked();
    void qingdian_clicked();
    void wild_clicked();
    void winter_clicked();
    void ruins_clicked();
    void city_clicked();
    void push_button_clicked();
    void push_button2_clicked();
    void xunyin_clicked();
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
