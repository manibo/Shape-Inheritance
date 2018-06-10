#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std; 

class Circle: public Shape {

public:
	void draw();
	double CalArea();
	double CalCircumference();
	Circle(string, string, double);
	void setRad(double rad);
	double getRad();
private:
	double radius;


};
#endif