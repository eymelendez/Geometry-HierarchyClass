// Circle.cpp

#include<iostream>

using namespace::std;

#include"Circle.h"
#include"BasicShape.h"

// Constructor
Circle::Circle()
{
	setCenterX(0);
	setCenterY(0);
	setRadius(0.0);
}

// Parameter Constructor
Circle::Circle(long int aCenterX, long int aCenterY, double aRadius) : BasicShape()	// <--- Main Class
{
	setCenterX(aCenterX);
	setCenterY(aCenterY);
	setRadius(aRadius);
}

// Destructor
Circle::~Circle()
{
	// cout << "Destroying objects..." << endl;
}

// Setters
void Circle::setCenterX(long int aCenterX)
{
	if (aCenterX < 0) {
		cerr << "The center can not be a negative number.";		// Validation for negative numbers
		exit(1);
	}
	else
		centerX = aCenterX;
}

void Circle::setCenterY(long int aCenterY)
{
	if (aCenterY < 0) {
		cerr << "The center can not be a negative number.";		// Validation for negative numbers
		exit(1);
	}
	else
		centerY = aCenterY;
}

void Circle::setRadius(double aRadius)
{
	if (aRadius < 0) {
		cerr << "The radius can not be a negative number.";		// Validation for negative numbers
		exit(1);
	}
	else
		radius = aRadius;
}

// Getters
long int Circle::getCenterX() const
{
	return centerX;
}

long int Circle::getCenterY() const
{
	return centerY;
}

double Circle::getRadius() const
{
	return radius;

}

// Method
double Circle::calculateArea()
{
	double area;
	area = 3.14159 * radius * radius;
	return area;
}
