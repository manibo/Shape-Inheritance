#include "shape.h"
#include "circle.h"
#include <iostream>
using namespace std;

Circle::Circle(string nam, string col, double rad):Shape(col, nam) {
	//void setName(string nam);
	//void setColor(string col); <-this redefines it d/n use
	setRad(rad);		
}
void Circle::draw()
{
	cout <<endl<<"Color is "<<getColor() << endl <<"Name is "<< getName()<<endl<<"radius is "<<getRad()<<endl<<"area: "<<CalArea()<<endl;;
}

void Circle::setRad(double rad) {
	radius = rad;
}

double Circle::CalArea() {
	return 3.14*radius*radius;
	
}

double Circle:: getRad() {
	return radius;
}


double Circle::CalCircumference() {
	return 2 * (3.14)*radius;

	

}