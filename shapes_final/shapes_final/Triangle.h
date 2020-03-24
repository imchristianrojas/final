#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	double base, height, s1, s2;

public:
	Triangle();
	Triangle(double, double, double, double);
	~Triangle();

	double getArea();
	double getPerimeter();

	void setBase(double);
	void setHeight(double);
	void setSide1(double);
	void setSide2(double);

	double getBase();
	double getHeight();
	double getSide1();
	double getSide2();

};

