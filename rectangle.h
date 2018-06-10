#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include "circle.h"
#include "quadrilateral.h"
#include <iostream>
using namespace std;

class rectangle : public quadrilateral {
public:
	void rectangle::draw();
	double CalArea(double, double);
	bool isSquare(int, int);
	//bool getisSquare();
	rectangle(string, string, int, int);


private:


};
#endif