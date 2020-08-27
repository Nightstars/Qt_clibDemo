#include "Qt_clibDemo.h"
#include <qmessagebox.h>
#include "flatui.h"

Qt_clibDemo::Qt_clibDemo(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onBtnClicked()));
    //FlatUI::setPushButtonQss(ui.pushButton);
    FlatUI::setPushButtonQss(ui.pushButton, 5, 8, "#1ABC9C", "#E6F8F5", "#2EE1C1", "#FFFFFF", "#16A086", "#A7EEE6");
    FlatUI::setLineEditQss(ui.lineEdit, 5, 2, "#DCE4EC", "#1ABC9C");
    //FlatUI::setPushButtonQss(ui.pushButton, 5, 8, "#3498DB", "#FFFFFF", "#5DACE4", "#E5FEFF", "#2483C7", "#A0DAFB");
    //FlatUI::setPushButtonQss(ui.pushButton, 5, 8, "#E74C3C", "#FFFFFF", "#EC7064", "#FFF5E7", "#DC2D1A", "#F5A996");
}
void Qt_clibDemo::onBtnClicked() {
    QMessageBox* haha = new QMessageBox(QMessageBox::Icon::Information, QString("demo"), QString("hehe"));
    haha->show();
    
}
