#pragma once
#include <string>
#include <cmath>
#include <iostream>
#include "Figure.h"
using namespace std;

const double PI = 3.1415926535897932384626433832795;

class Circle : public Figure
{
	double r;

public:

	Circle(double _r)
		: r(_r) {

	}

	~Circle() {

	}

	double area() {

		return PI * r * r;
	}

	double perimeter() {

		return 2 * r * PI;
	}

	string to_string() {

		//char str[1];

		printf("Figure: circle (r=%.2f)", r);

		return string("");
	}
};

