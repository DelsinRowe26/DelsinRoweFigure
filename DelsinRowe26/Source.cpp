#include <iostream>
#include <string>
//#include "Figure.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"

using namespace std;

int main() 
{
	Figure* f;

	Rectangle* r = new Rectangle(7.0, 8.34);
	f = r;

	cout << f->to_string() << endl;
	cout << "Area: " << f->area() << endl;
	cout << "Perimeter: " << f->perimeter() << endl << endl;

	delete r;

	Circle* c = new Circle(5.89);
	f = c;

	cout << f->to_string() << endl;
	cout << "Area: " << f->area() << endl;
	cout << "Perimeter: " << f->perimeter() << endl << endl;

	delete c;

	Triangle* t = new Triangle(13.0, 10.5, 15.3);
	f = t;

	cout << f->to_string() << endl;
	cout << "Area: " << f->area() << endl;
	cout << "Perimeter: " << f->perimeter() << endl << endl;

	delete t;

	return 0;
}