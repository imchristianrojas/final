#include <iostream>
#include <string>
#include <iomanip>
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Parallelogram.h"

using namespace std;

int main() {
	Shape *circlePtr = nullptr;
	Shape *trianglePtr = nullptr;
	Shape *parallelPtr = nullptr; //Dynamic Binding

	double base, length, height, width, radius, side1, side2, angledSide;
	string temp, temp2, temp3;
	bool circleCheck = false, triangleCheck = false, parallelogramCheck = false;
	bool firstCheck = false, secondCheck = false, thirdCheck = false, fourthCheck = false;
	cout << "Circle" << endl;
	while (circleCheck == false) {
		circleCheck = true;
		try {
			cout << "Enter a radius for circle: ";
			getline(cin, temp);
			radius = stoi(temp);

			circlePtr = new Circle(Circle(radius));
		}
		catch (invalid_argument e) {
			circleCheck = false;
			cout << "Please enter a number not a text!" << endl;
		}
	}

	cout << "Triangle" << endl;
	while (triangleCheck == false) {
		triangleCheck = true;
		try {
			if (firstCheck == false) {
				cout << "Enter a value for base: ";
				getline(cin, temp);
				base = stoi(temp);
			}
			firstCheck = true;

			if (fourthCheck == false) {
				cout << "Enter a value for height: ";
				getline(cin, temp);
				height = stoi(temp);
				fourthCheck = true;
			}

			if (secondCheck == false) {
				cout << "Enter a value for side 1: ";
				getline(cin, temp);
				side1 = stoi(temp);
				secondCheck = true;
			}

			if (thirdCheck == false) {
				cout << "Enter a value for side 2: ";
				getline(cin, temp2);
				side2 = stoi(temp2);
				thirdCheck = true;

				if (side1 + side2 > base) {
					throw 1;
				}
			}

			

		}
		catch (invalid_argument e) {
			cout << "Please enter a number not a text!\n" << endl;
			triangleCheck = false;
		}
		catch (int e) {
			cout << "Please enter a value for side1 and side2 that sums up to be smaller than base!\n" << endl;
			triangleCheck = false;
			secondCheck = false;
			thirdCheck = false;
		}
	}

	trianglePtr = new Triangle(Triangle(base, height, side1, side2));
	firstCheck = false;
	secondCheck = false;
	thirdCheck = false;
	fourthCheck = false;

	cout << "Parallelogram" << endl;

	while (parallelogramCheck == false) {
		parallelogramCheck = true;

		try {
			if (firstCheck == false) {
				cout << "Enter a value for base: ";
				getline(cin, temp);
				base = stoi(temp);
			}
			firstCheck = true;

			if (thirdCheck == false) {
				cout << "Enter a value for angled side: ";
				getline(cin, temp);
				angledSide = stoi(temp);
				thirdCheck = true;
			}

			if (fourthCheck == false) {
				cout << "Enter a value for height: ";
				getline(cin, temp2);
				height = stoi(temp2);
				if (height > base || height > angledSide) {
					throw 1;
				}

				fourthCheck = true;

			}

		}
		catch (invalid_argument e) {
			cout << "Please enter a number not a text!\n" << endl;
			parallelogramCheck = false;
		}
		catch (int e) {
			cout << "Please enter a value for height that is smaller than base and angled side!\n" << endl;
			parallelogramCheck = false;
			fourthCheck = false;
		}
	}

		parallelPtr = new Parallelogram(Parallelogram(base, angledSide, height));
		cout << "Circle: " << endl;
		cout << circlePtr->getArea() << endl;
		cout << circlePtr->getPerimeter();

		cout << "\nTriangle: " << endl;
		cout << trianglePtr->getArea() << endl;
		cout << trianglePtr->getPerimeter() << endl;

		cout << "\nParallelogram: " << endl;
		cout << parallelPtr->getArea() << endl;
		cout << parallelPtr->getPerimeter() << endl;
		system("pause");


	}
