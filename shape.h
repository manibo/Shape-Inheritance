#ifndef Shape_H
#define Shape_H
#include<string>
#include <iostream>
using namespace std;

class Shape
{

public:
	virtual void draw() =0; //DEFINE FOR ALL
	virtual double CalArea();//DEFINE FOR ALL
	static int getCount();
	void setName(string);
	string getName();
	void setColor(string);
	string getColor();
	Shape(string, string);
	//Shape();
	~Shape();
private:
	static int count;
	string name;
	string color;
	//double area;
	
};

#endif