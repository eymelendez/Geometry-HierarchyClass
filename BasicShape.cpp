// BasicShape.cpp

#include<iostream>

using namespace::std;

#include"BasicShape.h"

// Constructor
BasicShape::BasicShape()
{
	setArea(0.0);
}

// Parameter Constructor
BasicShape::BasicShape(double aArea)
{
	setArea(aArea);
}

// Destructor
BasicShape::~BasicShape()
{
	// cout << "Destroying Objects..." << endl;
}

// Setters
void BasicShape::setArea(double aArea)
{
	if (aArea < 0)
	{
		cout << "The area can not be a negative number.";	// Validation for negative numbers
		exit(1);

	}
	else
	{
		area = aArea;

	}
}

// Getters
double BasicShape::getArea() const
{
	return area;
}

