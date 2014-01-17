#include "moc/dialogEditLayer.hpp"
#include "ui_dialogEditLayer.h"
////////////////////////////////////////////////////////////////////////////////
DialogEditLayer::DialogEditLayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditLayer)
{
    ui->setupUi(this);
}
////////////////////////////////////////////////////////////////////////////////
DialogEditLayer::~DialogEditLayer()
{
    delete ui;
}
////////////////////////////////////////////////////////////////////////////////
void DialogEditLayer::setName(const QString& str)
{
    ui->lineEdit->setText(str);
}
////////////////////////////////////////////////////////////////////////////////
QString DialogEditLayer::getName() const
{
    return ui->lineEdit->text();
}
////////////////////////////////////////////////////////////////////////////////
