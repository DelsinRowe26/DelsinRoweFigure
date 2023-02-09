#pragma once
#include <string>
#include <cmath>
#include <cstdio>
#include <math.h>
#include <iostream>
#include "Figure.h"

using namespace std;

class Triangle : public Figure
{
	double a;
	double b;
	double c;

public:
	Triangle(double _a, double _b, double _c)
		: a(_a)
		, b(_b)
		, c(_c) {

	}

	~Triangle() {

	}

	double area() {
		double p = (a + b + c) / 2.0;

		return sqrt(p * (p - a) * (p - b) * (p - c));
	}

	double perimeter() {
		return a + b + c;
	}

	string to_string() {

		//char str;

		printf("Figure: triangle (a=%.2f, b=%.2f, c=%.2f)", a, b, c);

		return string("");
	}
};

