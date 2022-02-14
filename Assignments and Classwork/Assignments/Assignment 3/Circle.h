// Circle class derived from BasicShape.
#ifndef Circle_h
#define Circle_h

#include <string> // C++ standard string class
#include "BasicShape.h" // BasicShape class definition

class Circle : public BasicShape {
    private:
        double radius; // a double used to hold the circle’s radius
    
    public:
        // Constructor
        // constructor that should call the base class constructor to initialize the member area with a and name with n
        // constructor will also set the value of member radius with r 
        Circle (const double, const std::string &, const double);
        
        // Overrides the pure virtual function in the base class
        // (area = 3.14159 * radius * radius)
        // stores the result in the inherited member area
        virtual void calcArea(); // Calculates the area of the circle

        // Overrides the virtual function in the base class
        virtual void print() const; // Print radius, area and name
};

#endif // Circle_h