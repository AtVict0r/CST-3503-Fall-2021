#include <iostream>

// 2. Write a program that uses a function template called minimum to determine the smaller of two arguments. 
template <class T>
T minimum(T value1, T value2) {
    // determine whether value1 is less than value2
    return (value1 < value2)? value1 : value2;
} // end function template minimum

int main() {
    using std::cout, std::endl;

    // Test the program using integer arguments.
    cout << "The minimum integer value of 12 and 10 is: " << minimum(12, 10) << endl;

    // Test the program using character arguments.
    cout << "The minimum character value of 'H' and 'L' is: " << minimum('H', 'L') << endl;

    // Test the program using string arguments.
    cout << "The minimum string value of \"tomorrow\" and \"today\" is: " << minimum("tomorrow", "today") << endl;

    return 0;
}