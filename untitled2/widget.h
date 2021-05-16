#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QList>

#include<QColor>
#include<QPushButton>

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
    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_SaveColor_clicked();

    void on_LoadColor_clicked();

private:
    Ui::Widget *ui;
    QList<QColor>ColorList;

    //to save color pushbutton

        void SaveColor(QString key,QColor color);

    //To loiad color

        QColor loadColor(QString key);

    //to set loaded color

        void setLoadedColor(QString key,int index,QPushButton *button);
};
#endif // WIDGET_H
