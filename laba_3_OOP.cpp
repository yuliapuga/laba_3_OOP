#include "TCube.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	TCube cube1;
	TCube cube2(5);
	TCube cube3(cube2);

	cout << "First cube: \n";
	cube1.output();
	cout << "Second cube: \n";
	cube2.output();
	cout << "Third cube: \n";
	cube3.output();

	cube1.input();

	cube1.getArea();

	cout << "Cube1 is Equal cube2: ";
	if (cube1 == cube2) {
		cout << "true" << endl;
	}else
		cout << "false" << endl;

	cout << "Cube1 is NOTEqual cube2: ";
	if (cube1 != cube2) {
		cout << "true" << endl;
	}
	else
		cout << "false" << endl;

	TCube sumcube=cube2+cube3;
	sumcube.output();

	TCube difcube = cube2 - cube3;
	difcube.output();

	TCube pcube = cube2*10;
	pcube.output();
	
}