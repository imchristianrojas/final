#include "Shape.h"
#include <iostream>
#include <string>

Shape::Shape() {
	numOfSides = 0;
	width = 0;
	length = 0;
	height = 0;
}

Shape::Shape(int sides) {
	numOfSides = sides;
	width = 0;
	length = 0;
	height = 0;
}

Shape::Shape(int sides, double len, double wid, double hei) 
	: Shape::Shape(sides)
{
	length = len;
	width = wid;
	height = hei;
}

Shape::~Shape() {
	std::cout << "Base destructor" << std::endl;

}

double Shape::getArea() {
	return width * height * length;
}

double Shape::getPerimeter() {
	return width + height + length;
}

void Shape::setSides(int sides) {
	numOfSides = sides;
}

void Shape::setLength(double len) {
	length = len;
}

void Shape::setWidth(double wid) {
	width = wid;
}

void Shape::setHeight(double hei) {
	height = hei;
}

int Shape::getSides() {
	return numOfSides;
}

double Shape::getLength() {
	return length;
}

double Shape::getWidth() {
	return width;
}

double Shape::getHeight() {
	return height;
}
