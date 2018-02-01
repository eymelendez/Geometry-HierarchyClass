// Rectangle.cpp

#include<iostream>

using namespace::std;

#include"BasicShape.h"
#include"Rectangle.h"

// Constructors
Rectangle::Rectangle()
{
	setWidth(0);
	setLength(0);
}

// Parameter Constructor
Rectangle::Rectangle(long int aWidth, long int aLength) : BasicShape()	// <-- Main Class
{
	setWidth(aWidth);
	setLength(aLength);
}

// Destructor
Rectangle::~Rectangle()
{
	cout << "Destroying Objects..." << endl;
}

// Setters
void Rectangle::setWidth(long int aWidth)
{
	if (aWidth < 0) {
		cerr << "The width can not be a negative number.";
		exit(1);
	}
	else
		width = aWidth;
}

void Rectangle::setLength(long int aLength)
{
	if (aLength < 0) {
		cerr << "The length can not be a negative number.";
		exit(1);
	}
	else
		length = aLength;
}

// Getters
long int Rectangle::getWidth() const
{
	return width;
}

long int Rectangle::getLength() const
{
	return length;
}

// Method
double Rectangle::calculateArea()
{
	double area;
	area = length * width;
	return area;
}
