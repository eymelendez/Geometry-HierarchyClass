// MAIN.cpp

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace::std;

#include"BasicShape.h"
#include"Circle.h"
#include"Rectangle.h"

/*		
	File Name : MAIN.cpp
	Author : Edwin Y.Melendez Lopez #89139
	Description: This is an heritance class. It will use the main class (BasicShape)
				 and name other sub-classes (Circle & Rectangle) and these classes are in
				 charge to calculate their respective areas. The calculations of the are is 
				 a function in the main class.

	History :
			05/15/2017 - Program Created. EML
			05/15/2017 - BasicShape.h file Added. EML
			05/15/2017 - BasicShape.cpp file Added. EML
			05/15/2017 - Circle.h created. EML
			05/15/2017 - Circle.cpp created. EML
			05/15/2017 - Rectangle.h created. EML
			05/15/2017 - Rectangle.cpp created. EML
			05/15/2017 - MAIN.cpp created. EML
			05/17/2017 - Testing everything, it runs correctly, success! EML. */

int main() 
{
	Circle cir(11, 7, 2.8); // Implemented a predetermined x and y values with a random radius value.
	Rectangle rec(2, 4);	// Implemented a predetermined width and length value.

	// Shows the information of the circle giving the centerX value and the centerY
	// It also shows the radius of the circle.
	cout << "Circle" << endl;
	cout << "Coordinate of the x axis of the circle's center: " << cir.getCenterX() << endl;
	cout << "Coordinate of the y axis of the circle's center: " << cir.getCenterY() << endl;
	cout << "The area of a circle with a " << cir.getRadius() << " radius is: " << cir.calculateArea() << endl;

	// Shows the information of the rectangle giving the area of the rectangle using the Width and Length.
	cout << "\nRectangle" << endl;
	cout << "The area of a rectangle with a width of " << rec.getWidth() << " and a " << rec.getLength() << " of length is: " << rec.calculateArea() << endl;

	system("pause");
	return 0;

} // end main. 17 de mayo de 2017 - Successful!