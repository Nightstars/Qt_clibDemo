#pragma once

#include <QtWidgets/QWidget>
#include "ui_Qt_clibDemo.h"
#include <qpushbutton.h>

class Qt_clibDemo : public QWidget
{
    Q_OBJECT

public:
    Qt_clibDemo(QWidget *parent = Q_NULLPTR);
private slots:
    void onBtnClicked();
private:
    Ui::Qt_clibDemoClass ui;
    //QPushButton* m_btn;
    //Qt_clib* haha;
};
