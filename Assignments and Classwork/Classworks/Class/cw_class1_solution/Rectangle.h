// 1. Separate the interface from class implementation. That is, the header file will now contain only member function’s prototype and data members.

class Rectangle { 
// 1. In a header file, create a class Rectangle with 2 private floating data members: length and width. 

private:
float length, // data member             containing length
      width; // data member containing width

public:
// 2. Use constructor that takes two parameters and uses them to initialize the data members. 

Rectangle (float, float);

// 3. Also, provide set and get functions for the length and width attributes. 
bool setLength(float);

// member function that sets the width in the object
bool setWidth(float);

// member function that retrieves the length from the object
float getLength();

// member function that retrieves the width from the object
float getWidth();
}; //End class Rectangle