#-------------------------------------------------
#
# Project created by QtCreator 2017-11-17T13:36:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SuspendedScrollBar
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    suspendedscrollbar.cpp \
    w_customlistwidget.cpp

HEADERS  += widget.h \
    suspendedscrollbar.h \
    w_customlistwidget.h

FORMS    += widget.ui


MOC_DIR += ./tmp/moc_dir
UI_DIR += ./tmp/ui_dir
OBJECTS_DIR += ./tmp/object_dir


RESOURCES += \
    resource.qrc
