#include "moc/DialogYearOfConst.hpp"
#include "ui_DialogYearOfConst.h"
#include "gui/applicationGui.hpp"

DialogYearOfConst::DialogYearOfConst(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogYearOfConst)
{
    ui->setupUi(this);
	connect(ui->checkBoxConst,SIGNAL(toggled(bool)),this,SLOT(constChecked(bool)));
	connect(ui->checkBoxDemol,SIGNAL(toggled(bool)),this,SLOT(demolChecked(bool)));
}

DialogYearOfConst::~DialogYearOfConst()
{
    delete ui;
}

void DialogYearOfConst::editDates(const vcity::URI& uri)
{
	citygml::CityObject* obj = nullptr;
	uri.resetCursor();
    obj = vcity::app().getScene().getCityObjectNode(uri);
	osg::ref_ptr<osg::Node> node = appGui().getOsgScene()->getNode(uri);

    int yearOfConstruction;
    int yearOfDemolition;

    bool a = node->getUserValue("yearOfConstruction", yearOfConstruction);
    bool b = node->getUserValue("yearOfDemolition", yearOfDemolition);

	ui->checkBoxConst->setChecked(a);
	ui->dateConstrEdit->setEnabled(a);
	if (a) 
	{
		//(yearOfConstruction,1,1);
		ui->dateConstrEdit->setDate(QDate(yearOfConstruction,1,1));
	}
	ui->checkBoxDemol->setChecked(b);
	ui->dateDemolEdit->setEnabled(b);
	if (b)
	{
		ui->dateDemolEdit->setDate(QDate(yearOfDemolition,1,1));
	}

	//window execution
	int res = exec();
	if (res)
	{
		QDate yoC = ui->dateConstrEdit->date();
		QDate yoD = ui->dateDemolEdit->date();

		if (ui->checkBoxConst->isChecked())
		{
			obj->setAttribute("yearOfConstruction",yoC.toString("yyyy").toStdString());
			node->setUserValue("yearOfConstruction",yoC.year());
		}
	
		if (ui->checkBoxDemol->isChecked())
		{
			obj->setAttribute("yearOfDemolition",yoD.toString("yyyy").toStdString());
			node->setUserValue("yearOfDemolition",yoD.year());
		}
	}
}

void DialogYearOfConst::constChecked(bool checked)
{
	ui->dateConstrEdit->setEnabled(checked);
}

void DialogYearOfConst::demolChecked(bool checked)
{
	ui->dateDemolEdit->setEnabled(checked);
}