// Rectangle.h

#pragma once

#include<iostream>

using namespace::std;

#include"BasicShape.h"

class Rectangle : public BasicShape		// <- Main Class
{
public:
	Rectangle();	// Constructor
	Rectangle(long int aWidth, long int aLength);  // Parameter Constructor
	~Rectangle();	// Destructor

	// Setters
	void setWidth(long int aWidth);
	void setLength(long int aLength);

	// Getters
	long int getWidth() const;
	long int getLength() const;

	// Methods
	double calculateArea() override;

private:

	long int width, length;
};

