#include "Shape.h"


Circle::Circle(double radius) {
	this->radius = radius;
}

double Circle::square() {
	return (atan(1) * 4) * (radius * radius);
}
BoundingBoxDimensions Circle::dimensions()  {
	return BoundingBoxDimensions{ radius * 2,radius * 2 };
}
string Circle::type()  {
	return "Circle";
}


Rectangle::Rectangle(double width, double height) {
	this->width = width;
	this->height = height;
}

double Rectangle::square()  {
	return height * width;
}
BoundingBoxDimensions Rectangle::dimensions()  {
	return BoundingBoxDimensions{ height,width };
}
string Rectangle::type() {
	return "Rectangle";
}

Triangle::Triangle(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

double Triangle::square() {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
BoundingBoxDimensions Triangle::dimensions() {
	double p = (a + b + c) / 2;
	double radius = a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	return BoundingBoxDimensions{ radius * 2,radius * 2 };

}
string Triangle::type(){
	return "Triangle";
}


void printParams(Shape* shape)
{
	cout << "Type: " << shape->type() << endl;
	cout << "Square: " << shape->square() << endl;
	BoundingBoxDimensions tmp = shape->dimensions();
	cout << "Width: " << tmp.width << endl;
	cout << "Height: " << tmp.height << endl << endl;
}