
#include <iostream>
#include "BasicShape.h"
#include "Circle.h"

// Write a function named poly whose only parameter is a BasicShape pointer. 
void poly (BasicShape* const); // prototype

int main()
{
    Circle obj1 (0, "Round", 10);
    
    poly (&obj1);

    return 0;
}

// Function poly should use the BasicShape pointer to invoke calcArea function and print function. 
void poly (BasicShape* const obj) { 
    obj -> calcArea();
    obj -> print();
}