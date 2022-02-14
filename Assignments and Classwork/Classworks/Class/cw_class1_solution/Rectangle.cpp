//  Place body of class’s member functions in a separate file.

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle (float length, float width) {
  setLength(length); // length = length;
  setWidth(width); // width = width; 
}

bool Rectangle::setLength(float length) {
// The set function should verify that the parameter is larger than 0.0 and less than 20.0. If value is verified, then set functions assigns the value to data member and return true. Otherwise, returns false. 

// member function that sets the length in the object
if ((length > 0.0) && (length < 20.0)) {
  this -> length = length;// store the length
  return true;
} else {
  return false;
}}

bool Rectangle::setWidth(float width) {
// The set function should verify that the parameter is larger than 0.0 and less than 20.0. If value is verified, then set functions assigns the value to data member and return true. Otherwise, returns false. 

if ((width > 0.0) && (width < 20.0)) {
  this -> width = width; // store the width
  return true;
} else {
  return false;
}}

float Rectangle::getLength() {
  return length; // return length's value to this function's caller
}

float Rectangle::getWidth() {
  return width; // return width's value to this function's caller
}