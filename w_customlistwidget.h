#ifndef W_CUSTOMLISTWIDGET_H
#define W_CUSTOMLISTWIDGET_H

#include <QListWidget>
#include <QBoxLayout>
#include <QLabel>

#include "suspendedscrollbar.h"

class W_CustomListWidget : public SuspendedScrollBar_ListWidget {
    Q_OBJECT
public:
    explicit W_CustomListWidget(QWidget * parent = 0);
    ~W_CustomListWidget(){}

    void init();//初始化

};

class W_ListWidget : public QListWidget {
    Q_OBJECT
public:
    explicit W_ListWidget(QWidget * parent = 0);
    ~W_ListWidget(){}

    void init();//初始化

};

class W_CustomItem : public QWidget
{
    Q_OBJECT
public:
    explicit W_CustomItem(QWidget * parent = 0);
    ~W_CustomItem(){}

private:
    QHBoxLayout * m_hbLayoutMain;
    QLabel * m_labelHead;

    QVBoxLayout * m_vbLayoutContent;
    QWidget * m_wgtContent;
    QLabel * m_labelName;
    QLabel * m_labelContent;
};

#endif // W_CUSTOMLISTWIDGET_H
