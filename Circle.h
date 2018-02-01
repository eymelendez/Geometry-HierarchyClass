// Circle.h

#pragma once

#include<iostream>

using namespace::std;

#include"BasicShape.h"

class Circle : public BasicShape // <- Main Class
{
public:

	// Constructors
	Circle();
	Circle(long int aCenterX, long int aCenterY, double aRadius);
	~Circle();

	// Setters
	void setCenterX(long int aCenterX);
	void setCenterY(long int aCenterY);
	void setRadius(double aRadius);

	// Getters
	long int getCenterX() const;
	long int getCenterY() const;
	double getRadius() const;

	// Method
	double calculateArea() override;


private:

	long int centerX, centerY;
	double radius;
};


