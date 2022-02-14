#include <iostream>
#include "GenericVector.h"

int main() {
    // declare an object of GenericVector 
    // where the type parameter will be replaced by double.
    GenericVector <double> obj1;

    // enter at least 3 double values 
    // into the vec data member of object created.
    obj1.push(2.71828);     // Euler's number
    obj1.push(0.8346);      // Gauss' constant
    obj1.push(23.14069);    // Gelfond's constant
    obj1.push(3.14159);     // PI
    obj1.push(1.618);       // PHI
    
    // use the last function to print the last element 
    // of the object’s data member.  
    std::cout << "Last element of obj1 is: " << obj1.last() << std::endl; 
    // PHI, Golden ratio

    // use a stream manipulator 
    // to ensure that 2 digits are printed after decimal. 
    std::cout << std::fixed;
    std::cout.precision(2);

    // use the print function to print all elements 
    // of the object’s data member.
    obj1.print();
    // Euler's number, Gauss' constant, Gelfond's constant, PI, and PHI
    
    return 0;
}