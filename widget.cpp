#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    m_labelImage = new QLabel();
    ui->scrollArea->setWidget(m_labelImage);
    ui->listWidget_2->hide();
    m_bInit = false;
    init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::init(){
    if(!m_bInit){
        ui->listWidget->init();
        ui->listWidget_2->init();

        QImage image(":/image.jpg");
        m_labelImage->setPixmap(QPixmap::fromImage(image));
        m_labelImage->adjustSize();
        m_bInit = true;
    }
}

//显示列表
void Widget::on_btnList_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//显示图片
void Widget::on_btnImage_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
