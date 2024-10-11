#pragma once
#include "TSquare.h"
class TCube :
	public TSquare
{
public:

	TCube() :TSquare(0) {}
	TCube(double a) :TSquare(a) {}
	TCube(const TCube& other) : TSquare(other) {}


	double getArea() {
		return TSquare::getArea() * 6;
	}

	double getPerimeter() {
		return TSquare::getPerimeter() * 4;
	}

	double getVolume()
	{
		return TSquare::getArea() * TSquare::getSide();
	}

	void output() {
		TSquare::output();
		cout << "Volum: " << getVolume() << endl;
	}

	TCube operator+( TCube& other) {
		return TCube(getSide()+other.getSide());
	}

	TCube operator-(TCube& other) {
		return TCube(getSide() - other.getSide());
	}

	TCube operator*(double number) {
		return TCube(getSide()*number);
	}


};



