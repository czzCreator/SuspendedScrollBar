#include "w_customlistwidget.h"
#include <QFile>
W_CustomListWidget::W_CustomListWidget(QWidget * parent)
    : SuspendedScrollBar_ListWidget(parent)
{

    QString style_file = ":/listwidget.qss";
    QFile styleFile(style_file);//路径名
    if(styleFile.open( QFile::ReadOnly )){
        QString style( styleFile.readAll() );
        this->setStyleSheet(style);
    }
}

void W_CustomListWidget::init(){
    for(int i = 0;i<10;i++){
        W_CustomItem * w_item = new W_CustomItem(this);
        QListWidgetItem * pItem = new QListWidgetItem();
        this->addItem(pItem);
        pItem->setSizeHint(QSize(0,60));
        this->setItemWidget(pItem , w_item);
    }
}

W_ListWidget::W_ListWidget(QWidget * parent)
    : QListWidget(parent)
{
    QString style;
    QString style_file = ":/listwidget.qss";
    QFile styleFile(style_file);//路径名
    if(styleFile.open( QFile::ReadOnly )){
        style += QString( styleFile.readAll() );
        styleFile.close();
    }

//    style_file = ":/scrollbar.qss";
//    styleFile.setFileName(style_file);//路径名
//    if(styleFile.open( QFile::ReadOnly )){
//        style += QString( styleFile.readAll() );
//        styleFile.close();
//    }
    this->setStyleSheet(style);
}

void W_ListWidget::init(){
    for(int i = 0;i<10;i++){
        W_CustomItem * w_item = new W_CustomItem(this);
        QListWidgetItem * pItem = new QListWidgetItem();
        this->addItem(pItem);
        pItem->setSizeHint(QSize(0,60));
        this->setItemWidget(pItem , w_item);
    }
}

W_CustomItem::W_CustomItem(QWidget *parent)
    : QWidget(parent)
{
    static int giNum = 0;

    this->setMaximumHeight(60);
    this->setMinimumHeight(60);

    m_hbLayoutMain = new QHBoxLayout(this);
    m_hbLayoutMain->setContentsMargins(10,5,0,5);
    m_hbLayoutMain->setSpacing(10);

    m_labelHead = new QLabel(this);
    m_labelHead->setMaximumSize(50,50);
    m_labelHead->setMinimumSize(50,50);
    m_labelHead->setStyleSheet("border-radius:4px;border-image:url(:/head.png)");
    m_wgtContent = new QWidget(this);
    m_vbLayoutContent = new QVBoxLayout(m_wgtContent);
    m_vbLayoutContent->setContentsMargins(0,0,0,0);
    m_vbLayoutContent->setSpacing(8);

    m_labelName = new QLabel(this);
    m_labelName->setStyleSheet("font:12px 微软雅黑;color:#333333;");
    m_labelName->setAlignment(Qt::AlignLeft | Qt::AlignBottom);
    m_labelName->setText("Qt 开发者 GS");

    m_labelContent = new QLabel(this);
    m_labelContent->setStyleSheet("font:12px 微软雅黑;color:#999999;");
    m_labelContent->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    m_labelContent->setText(QString("ItemId==%1。Q群：287249639，本群只用于 Qt 开发者的分流，可以刷水，也可以讨论技术。").arg(giNum));
    m_vbLayoutContent->addWidget(m_labelName);
    m_vbLayoutContent->addWidget(m_labelContent);
    m_hbLayoutMain->addWidget(m_labelHead);
    m_hbLayoutMain->addWidget(m_wgtContent);

    giNum ++;
}
