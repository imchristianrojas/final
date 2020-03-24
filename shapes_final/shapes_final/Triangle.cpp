#include "Triangle.h"
#include "Shape.h"
#include <iostream>
#include <string>

Triangle::Triangle() : Shape(3) {
	base = 0;
	height = 0;
	s1 = 0;
	s2 = 0;
}

Triangle::Triangle(double b, double h, double s1, double s2) {
	base = b;
	height = h;
	this->s1 = s1;
	this->s2 = s2;
}

Triangle::~Triangle() {
	std::cout << "Triangle destructor" << std::endl;
}

double Triangle::getArea() {
	return (base * height) / 2;
}

double Triangle::getPerimeter() {
	return base + s1 + s2;
}

void Triangle::setBase(double b) {
	base = b;
}

void Triangle::setHeight(double h) {
	height = h;
}

void Triangle::setSide1(double s1) {
	this->s1 = s1;
}

void Triangle::setSide2(double s2) {
	this->s2 = s2;
}

double Triangle::getBase() {
	return base;
}

double Triangle::getHeight() {
	return height;
}

double Triangle::getSide1() {
	return s1;
}

double Triangle::getSide2() {
	return s2;
}

