#include <iostream>
#include "shape.h"
#include "circle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "parallelogram.h"
#include <string>

using namespace std;

int main()
{
	//cout << "enter nam, col, radius, angle1, angle2, width and height  ";
	string nam, col; double rad = 0, ang = 0, ang2 = 0; int height = 0, width = 0;
	//cin >> nam >> col >> rad >> width >> height;
	Circle circ(col, nam, rad);
	quadrilateral quad(nam, col, width, height);
	rectangle rec(nam, col, width, height);
	parallelogram para(nam, col, width, height, ang, ang2);

	Shape *ptrcirc = &circ;
	Shape *ptrquad = &quad;
	Shape *ptrrec = &rec;
	Shape *ptrpara = &para;


	
	/*ptrcirc->draw();
	ptrquad->draw();
	ptrrec->draw();
	ptrpara->draw();*/
	//-----------------------
	cout << "Enter information for your objects" << endl;
	const char circle = 'c', quadrilateral = 'q', rectangle = 'r', parallelogram = 'p'; char shapetype;
	char x = 'y';
	while (x != 'x') {
		cout << "which shape would you like to work with?.. \nc=circle, q = quadrilateral, r = rectangle, p = parallelogram" << endl;
		cin >> shapetype;
		
		switch (shapetype) { //SWITCHH !
		case 'c':
			cout << "enter col, nam,  rad for circle" << endl;
			cin >>col>> nam>>rad;
			circ.setColor(col);
			circ.setName(nam);
			circ.setRad(rad);//only accesses simliar functions
			ptrcirc->draw(); //or (*ptrcirc).draw();
			//CAL AREA IS PART OF DRAW but virtual
			break;
		case 'q':
			cout << "enter nam, col, height, width" <<endl;
			cin >> nam >> col >> height >> width;
			quad.setName(nam);
			quad.setColor(col);
			quad.setHeight(height);
			quad.setWidth(width);
			ptrquad->draw();
			break;
		case 'r':
			cout << "enter nam, col, height, width" << endl;
			cin >> nam>> col>> height>>width;
			rec.setName(nam);
			rec.setColor(col);
			rec.setHeight(height);
			rec.setWidth(width);
			ptrrec->draw();
			break;
		case 'p':
			cout << "enter nam, col, height, width, 2 angles" << endl;
			cin >> nam>> col>> height>> width>> ang>> ang2;
			para.setName(nam);
			para.setColor(col);
			para.setHeight(height);
			para.setWidth(width);
			para.setAngle(ang,ang2);
			ptrpara->draw(); 
			
		 default:
			cout<< "you have entered an invalid, please re-enter" << endl;
			break;
		}
		cout << "would you like to add more object press y if not press x" << endl;
		cin >> x;
	}


	/*Circle circ(col, nam, rad);
	Shape *ptrcirc = &circ;
	cout << "FOR CIRCLE:" << endl;
	ptrcirc->draw();
	//x++;*/




		/*//Shape s("no Shape", "no Color");
		//s.draw();
		cout << "------Circle------------";
		Circle c("Ruby", "red", 5);
		//c.setRad(5);
		c.draw();
		//cout<<c.CalArea(5, 4);
		cout << "-----Quadrilateral---------" << endl;
		quadrilateral q("Sapphire", "blue", 6, 7);
		q.draw();
		cout << "------Rectangle-----------" << endl;
		rectangle r("Emerald", "green", 2, 3);
		r.draw(); //fixxxed
		cout << "--Parallelogram--------" << endl;
		parallelogram p("Pearl", "White", 8, 9, 30, 60);
		p.draw();
		cout << "-----------"<<endl;
		cout << "Counter is " << Shape::getCount() << endl<<endl;
		//cout << Shape::getCount();
		*/

		//cout << p.CalArea();//fixxed

		system("pause");
		return 0;
	
}