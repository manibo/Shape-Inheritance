
#include "shape.h"
#include "circle.h"
#include <iostream>
using namespace std;
#ifndef quadrilateral_H
#define quadrilateral_H

class quadrilateral :public Shape {
public:
	void draw();
	double CalArea();
	//quadrilateral();
	quadrilateral(string, string, int, int);
	double CalPerimater();
	double getCalPerimater();
	void setHeight(int h);
	void setWidth(int w);
	int getHeight();
	int getWidth();


private:
	int width;
	int height;

};
#endif