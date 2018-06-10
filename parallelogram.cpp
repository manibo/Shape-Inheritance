
#include "parallelogram.h"
#include "shape.h"
#include "circle.h"
#include "quadrilateral.h"
#include <iostream>
using namespace std;


parallelogram::parallelogram(string col, string nam, int h, int w, double ang, double ang2):quadrilateral(col, nam, h, w) {
	 setAngle(ang, ang2);
}
void parallelogram::draw()
{
	cout <<getName()<< endl << getColor() << endl << "Height is " << getHeight() <<endl<< "Width is " << getWidth() <<endl
		<< "Angles are: " << getAngle()<<","<<getAngle2()<<endl <<"Area is "<<CalArea(getWidth(),getHeight())<<endl;
}

double parallelogram::CalArea(double w, double h) {
	return w*h;
}
void parallelogram::setAngle(double ang, double ang2) {
	angle = ang;
	angle2 = ang2;
}
double parallelogram::getAngle() {
	return angle;
}
double parallelogram::getAngle2() {
		return angle2;
	}
