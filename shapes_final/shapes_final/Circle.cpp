#include "Circle.h"
#include "Shape.h"
#include <iostream>
#include <string>

Circle::Circle() : Shape(1){
	radius = 0;
}

Circle::Circle(double rad) {
	radius = rad;
}

Circle::~Circle() {
	std::cout << "Circle destructor" << std::endl;

}

double Circle::getArea() {
	return pi * (radius * radius);
}

double Circle::getPerimeter() {
	return pi * (2 * radius);
}

void Circle::setRadius(double rad) {
	radius = rad;
}

double Circle::getRadius() {
	return radius;
}

