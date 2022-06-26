#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void init();

private slots:
    void on_btnList_clicked();

    void on_btnImage_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    QLabel * m_labelImage;
    bool m_bInit;
};

#endif // WIDGET_H
