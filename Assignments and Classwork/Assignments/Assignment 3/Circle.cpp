// Circle class member-functions definitions.
#include <iostream>
#include "Circle.h"

const double PI = 3.14159;

// Constructor
Circle::Circle(const double a, const std::string &n, const double r)
    : radius(r), BasicShape(a, n) {}

// calculate area
void Circle::calcArea() {
    area = PI * radius * radius;
}

// print radius, area and name
void Circle::print() const {
    std::cout << " Name: " << getName() << std::endl;
    std::cout << " Radius: " << radius << std::endl;
    BasicShape::print();
}