#include "shape.h"
#include "circle.h"
#include "quadrilateral.h"
#include <iostream>
using namespace std;

//quadrilateral::quadrilateral() {}
quadrilateral::quadrilateral(string nam, string col, int h, int w):Shape(nam, col) {

	//void setName(string nam); //PRIVATE DATA
	//void setColor(string col);
	setHeight( h);
	 setWidth( w);
	
}
void quadrilateral::draw()
{
	//quadrilateral p;
	cout << getName()<<endl << getColor() <<endl<< "Width is " << getWidth() << endl << "Height is " << getHeight() << endl <<"Area is "<<CalArea()<<endl<<"Perimeter is "<<getCalPerimater()<<endl;
	//cout << name << color;
}

double quadrilateral::CalArea()
{
	return width*height; //RECTANGLE 
}

void quadrilateral::setHeight(int h) {
	height = h;
}
void quadrilateral::setWidth(int w) {

	width = w;
}
double quadrilateral::CalPerimater() {
	return 2 * (height + width);
}
double quadrilateral::getCalPerimater() {
	return 2 * (height + width);

}
int quadrilateral::getHeight() {
	return height;
}
int quadrilateral::getWidth() {
	return width;
}