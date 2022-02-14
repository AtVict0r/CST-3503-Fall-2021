#include <iostream>

// 1. Write a function template for the function cube. It takes an argument and returns its cube.
template <class T>
T cube(T num) {
    return num * num * num;
}

int main() {
    using std::cout, std::endl;

    // a) Call the function from main() using an integer value as parameter.
    cout << "Cube of interger value (2) = " << cube(2) << endl; // 8

    // b) Call the function from main() using a double value as parameter.
    cout << "Cube of double value (1.1) = " << cube(1.1) << endl; // 1.331

    // c) Try to call the function from main() using a string as parameter. Why there is an error? 
    // cout << "cube of string value (\"hello\") = " << cube("hello") << endl; // error 
    // string class has no defined '*' operator

    return 0;
}
