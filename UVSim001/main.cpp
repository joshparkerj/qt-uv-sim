#include "UVSim001.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UVSim001 w;
	w.show();
	return a.exec();
}
