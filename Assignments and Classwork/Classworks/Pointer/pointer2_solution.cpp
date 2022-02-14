#include <iostream>
//#include <array>

// For each of the following, write C++ statements that perform the specified task. Each part of the exercise should use the results of previous parts where appropriate. 

int main() {
  // 1) Declare a built-in array of type double called numbers with 10 elements, and initialize the elements to the values 0.0, 1.1, 2.2, …, 9.9. 
  
  //std::array <double, 10> numbers = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

  double numbers[] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
  
  // 2) Declare a pointer nPtr that points to a variable of type double.
  
  double *nPtr = nullptr;

  // 3) Write two separate statements that each assign the starting address of array numbers to the pointer variable nPtr.
  
  nPtr = &numbers[0];
  nPtr = numbers;

  
  // 4) Use a for statement to print the elements of array numbers using pointer/offset notation with pointer nPtr. (reference: slide 101)
  
  int len = *(&numbers + 1) - numbers; // The value contained in *(&arr + 1) is the address after 5 elements in the array. The value contained in arr is the address of the starting element in array. So their subtraction results in the length of the array
  
  std::cout << "Printing the elements of array numbers using pointer/offset notation" << std::endl;
  
  for (int pos = 0; pos < len; pos++){
    std::cout << *(nPtr + pos) << std::endl;
  }
  
  // 5) Use a for statement to print the elements of array numbers using pointer/subscript notation with pointer nPtr. (reference: slide 101)

  std::cout << "Printing the elements of array numbers using pointer/subscript notation" << std::endl;
  
  for (int pos = 0; pos < len; pos++){
    std::cout << nPtr[pos] << std::endl;
  }

  // 6) Refer to the fourth element of array numbers using pointer/offset notation with the array name as the pointer (reference: slide 101)
  
  std::cout << "Printing the fourth element of array numbers using pointer/offset notation" << std::endl;
  
  std::cout << *(numbers + 3) << std::endl;

  /** 7) Assume that double-precision, floating-point numbers are stored in eight bytes and that the starting address of the array is at location 1002500 in memory: 
  a) If nPtr points to the beginning of array numbers then what address is referenced by nPtr + 8? (manually calculate) 
  nPtr = 1002500 + 0 * 8 bytes = 1002500
  nPtr + 8 = 1002500 + 8 * 8 bytes = 1002564
  
  b) What value is stored at that location?
  std::cout << *(nPtr + 8) << std::endl;
  8.8
  **/
  
  return 0;  
}