#pragma once
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

class Figure
{
	public:
		virtual double area() = 0;
		virtual double perimeter() = 0;
		virtual string to_string() = 0;
};

