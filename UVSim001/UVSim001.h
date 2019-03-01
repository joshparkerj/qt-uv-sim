#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UVSim001.h"

class UVSim001 : public QMainWindow
{
	Q_OBJECT

public:
	UVSim001(QWidget *parent = Q_NULLPTR);

private:
	Ui::UVSim001Class ui;
};
