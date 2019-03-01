#include "UVSim.h"

UVSim::UVSim(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(pushButtonClicked()));
}

void UVSim::pushButtonClicked()
{
	ui.plainTextEdit_01.plaintText
}