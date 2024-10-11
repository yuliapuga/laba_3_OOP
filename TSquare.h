#pragma once
#include <iostream>
using namespace std;

class TSquare
{
private:
	double m_a;
public:
	TSquare() :m_a(0) {}

	TSquare(double a) : m_a(a) {}

	TSquare(const TSquare& other) :m_a(other.m_a) {}

	void input() {
		cout << "Input a: "; cin >> m_a;
		cout << endl;
	}

	void output() {
		cout << "Your a: " << m_a << endl;
		cout << "Area: " << getArea() << endl;
		cout << "Perimeter: " << getPerimeter() << endl;
	}


	double getArea() {
		return m_a * m_a;
	}

	double getPerimeter() {
		return 4 * m_a;
	}

	bool operator==(const TSquare& other) {
		return (this->m_a == other.m_a);
	}

	bool operator!=(const TSquare& other) {
		return (this->m_a != other.m_a);
	}

	TSquare operator+(const TSquare& other) {
		return TSquare(m_a + other.m_a);
	}

	TSquare operator-(const TSquare& other) {
		return TSquare(m_a - other.m_a);
	}

	TSquare operator*(double number) {
		return TSquare(m_a * number);
	}

	double getSide() {
		return m_a;
	}
};



