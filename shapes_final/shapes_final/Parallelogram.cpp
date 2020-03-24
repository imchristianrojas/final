#include "Parallelogram.h"
#include "Shape.h"
#include <iostream>
#include <string>

Parallelogram::Parallelogram() : Shape(4) {
	base = 0;
	s = 0;
	height = 0;
}

Parallelogram::Parallelogram(double b, double Angled, double h) {
	base = b;
	s = Angled;
	height = h;
}

Parallelogram::~Parallelogram() {
	std::cout << "Parallelogram destructor" << std::endl;
}

double Parallelogram::getArea() {
	return base * height;
}

double Parallelogram::getPerimeter() {
	return 2 * (base + s);
}

void Parallelogram::setBase(double b) {
	base = b;
}

void Parallelogram::setAngledS(double Angled) {
	s = Angled;
}

void Parallelogram::setHeight(double h) {
	height = h;
}

double Parallelogram::getBase() {
	return base;
}

double Parallelogram::getAngledS() {
	return s;
}

double Parallelogram::getHeight() {
	return height;
}


