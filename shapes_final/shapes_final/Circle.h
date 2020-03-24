#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	double radius, pi = 3.142;

public:

	Circle();
	Circle(double);
	~Circle();

	double getArea();
	double getPerimeter();

	void setRadius(double);

	double getRadius();



};

