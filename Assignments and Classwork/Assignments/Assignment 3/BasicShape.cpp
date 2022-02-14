// Abstract-base-class BasicShape member function definitions.
// Note: No definition are given for pure virtual functions.
#include <iostream>
#include <string>
#include "BasicShape.h"

// constructor
BasicShape::BasicShape(const double a, const std::string &n)
    : area(a), name(n)  {}

// print area
void BasicShape::print() const {
    std::cout << " Area: " << area << std::endl;
}

// return name
std::string BasicShape::getName() const { return name; }