#pragma once
#include <string>
#include "Figure.h"
using namespace std;

class Rectangle : public Figure
{
	double a;
	double b;

public:

	Rectangle(double _a, double _b)
		: a(_a)
		, b(_b) {

	}
	
	~Rectangle() {

	}

	double area() {
		return a * b;
	}

	double perimeter() {
		return (a + b) * 2;
	}

	string to_string() {
		//char str[1];

		printf("Figure: rectangle (a=%.2f, b=%.2f)", a, b);
		

		return string("");
	}
};


