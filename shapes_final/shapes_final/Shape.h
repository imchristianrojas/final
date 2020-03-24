#pragma once
class Shape
{
private:
	int numOfSides;
	double length, width, height;

public:
	Shape();
	Shape(int);
	Shape(int, double, double, double);
	virtual ~Shape();

	virtual double getArea();
	virtual double getPerimeter();

	void setSides(int);
	void setLength(double);
	void setWidth(double);
	virtual void setHeight(double);

	int getSides();
	double getLength();
	double getWidth();
	virtual double getHeight();
};

