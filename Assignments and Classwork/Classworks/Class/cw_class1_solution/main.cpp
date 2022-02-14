// 4. In a separate file, write a test program (containing main method) that:

#include <iostream>
#include "Rectangle.h"

int main() {
  
// a. creates two Rectangle objects with different values for data members 

  Rectangle Obj1(3.14, 2.66);
  Rectangle Obj2(5.28, 6.23);

// b. print the attributes (i.e. data members) of first object

  std::cout << "Object 1 dimensions: " << std::endl 
  << "Length = " << Obj1.getLength() << ", Width = " << Obj1.getWidth() << std::endl;

  std::cout << "Object 2 dimensions: " << std::endl 
  << "Length = " << Obj2.getLength() << ", Width = " << Obj2.getWidth() << std::endl;

  return 0;
}