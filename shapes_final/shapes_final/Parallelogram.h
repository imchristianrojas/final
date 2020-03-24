#pragma once
#include "Shape.h"

class Parallelogram : public Shape
{
private:
	double base, s, height;

public:
	Parallelogram();
	Parallelogram(double, double, double);
	~Parallelogram();

	double getArea();
	double getPerimeter();

	void setBase(double);
	void setAngledS(double);
	void setHeight(double);

	double getBase();
	double getAngledS();
	double getHeight();

};

