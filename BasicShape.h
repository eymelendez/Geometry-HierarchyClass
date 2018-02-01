// BasicShape.h

#pragma once

#include<iostream>

using namespace::std;

class BasicShape
{
public:
	BasicShape();	// Constructor
	BasicShape(double aArea); // Parameter Constructor
	~BasicShape(); // Destructor

	// Setter
	void setArea(double aArea);

	// Getter
	double getArea() const;

	// New Method
	virtual double calculateArea() = 0;


private:

	double area;

};

