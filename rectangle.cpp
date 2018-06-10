#include "shape.h"
#include "rectangle.h"
#include "quadrilateral.h"
#include <iostream>

rectangle::rectangle(string nam, string col, int w, int h):quadrilateral(nam,col,w, h){

	//void setName(string nam);
	//void setColor(string col);
	//setHeight( h); //void already defined in header prototype..
	 //setWidth( w);
}

void rectangle::draw()
{
	cout << getName() << endl << getColor() << endl << "Height is " << getHeight() << endl << "Width is " << getWidth() <<endl
		<<"area is "<<CalArea(getWidth(), getHeight())<<endl<< "is square (1,0)?: " << isSquare(getWidth(), getHeight()) << endl;// getisSquare();<-do from main
}

double rectangle::CalArea(double w, double h) {
	return w*h;
}
/*double rectangle::setCalArea() {
	area;
}*/
bool rectangle::isSquare(int w, int h) {
	
	if (w == h)
	{
		return true;
	}
	else 
	{
		return 0;
	}	
}
/*bool rectangle::getisSquare() {
	if(width==height){}
}
/*bool rectangle::getisSquare() {
	 if(width==height) 
	return true;
	
	else return false;
}*/