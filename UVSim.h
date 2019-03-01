#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UVSim.h"

class UVSim : public QMainWindow
{
	Q_OBJECT

public:
	UVSim(QWidget *parent = Q_NULLPTR);
private slots:
	void pushButtonClicked();
private:
	Ui::UVSimClass ui;
	string Program;
};
