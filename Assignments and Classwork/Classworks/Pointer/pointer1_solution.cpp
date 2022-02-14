#include <iostream>

int main() {

/**
Part 1:

For each of the following, write a single statement that performs the specified task.
**/ 

double number1 =7.3;
double number2;

// a) Declare the variable fPtr to be a pointer to a variable of type double.
double *fPtr = nullptr;

// b) Assign the address of variable number1 to pointer variable fPtr.
fPtr = &number1;

// c) Print the value of the variable pointed to by fPtr.
std::cout << *fPtr << std::endl;

// d) Assign the value of the variable pointed to by fPtr to variable number2.
number2 = *fPtr;

// e) Print the value of number2.
std::cout << number2 << std::endl;

// f) Print the address of number1.
std::cout << &number1 << std::endl;

// g) Print the address stored in fPtr. Is the value printed the same as the address of number1?
std::cout << fPtr << std::endl;

/**
Part 2:

a) Using the statements you wrote in Part 1, write a complete program (containing main() ) . 
[Note: You’ll need to include required files and using directives]

b) Create a new project and add the program to the project.

**/

}