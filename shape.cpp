#include "shape.h"
//#include "circle.h"
#include <iostream>
using namespace std;

 Shape::Shape(string nam, string col)
{
	name = nam;
	color = col;
	count++;
}

 int Shape::count = 0;
 //Shape::Shape(){}
int Shape::getCount() {
	{
		return count;
	}
}
double Shape::CalArea() {
	cout << "Unknown area" << endl;
	return 0;
}
Shape::~Shape()
{
	count--;

	//cout << name << endl << color << endl << "Area is " << CalArea() << endl;; 
}
void Shape::setName(string nam) {
	name = nam;
}
string Shape::getName() {
	return name;
}
void Shape::setColor(string col) {
	color = col;
}
string Shape::getColor() {
	return color;
}