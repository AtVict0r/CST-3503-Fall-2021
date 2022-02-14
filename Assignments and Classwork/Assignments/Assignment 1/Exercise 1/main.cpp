#include <iostream>

// Write a complete program that will have a main function and a function called twice. (Hint: See Fig 8.7) 

// a) Write a function named twice whose only parameter is an integer pointer.

void twiceByReference(int*); // prototype

int main() {
  // c) In the main method, declare an integer variable num and initialize it to 5. 
  
  int num(5);

  // Call the function twice from main such that the function twice will double the value of num.

  twiceByReference(&num); // pass num address to twiceByReference

  // d) In the main method and after calling the function, print the variable num

  std::cout << "The value of num is " << num << std::endl;
}

// b) This function doubles the value stored at the location pointed by the pointer parameter.

// calculate double of *nPtr; modifies variable num in main
void twiceByReference(int* nPtr) {
  *nPtr *= 2; // double the value stored at the location pointed by the pointer parameter by multiplying the pointer parameter by 2
}