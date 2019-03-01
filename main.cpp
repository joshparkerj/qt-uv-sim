#include "UVSim.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UVSim w;
	w.show();
	return a.exec();
}
/*
#include "Simulator.h"

#include <iostream>

int main() {
	Simulator* sim = new Simulator();

	sim->Input();

	sim->Execute();

	sim->MemDump();

	std::cout << "\nPress any key to exit\n";
	getchar();
	getchar();
	return 0;
}
*/