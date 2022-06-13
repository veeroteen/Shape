#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
struct BoundingBoxDimensions {
	double height;
	double width;
};

class Shape
{
public:
	virtual double square() = 0;
	virtual BoundingBoxDimensions dimensions() = 0;
	virtual std::string type() = 0;
};


class Circle: virtual public Shape {
	double radius;
public:
	Circle(double radius);

	virtual double square() override;
	virtual BoundingBoxDimensions dimensions() override;
	virtual string type() override;


};
class Rectangle : virtual public Shape {
	double width,height;
public:
	Rectangle(double width, double height);

	virtual double square() override;
	virtual BoundingBoxDimensions dimensions() override;
	virtual string type() override;


};
class Triangle : virtual public Shape {
	double a, b, c;
public:
	Triangle(double a, double b, double c);

	virtual double square() override;
	virtual BoundingBoxDimensions dimensions() override;
	virtual string type() override;


};

void printParams(Shape* shape);