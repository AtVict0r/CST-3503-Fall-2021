// BasicShape abstract class.
#ifndef BasicShape_h
#define BasicShape_h

#include <string> // C++ standard string class

class BasicShape {
    protected:
        double area; // a double used to hold the shape’s area
    
    private:
        std::string name; // a string to indicate the shape’s type

    public:
        // Constructor
        // A constructor that sets value of member area with a and member name with n
        BasicShape(const double, const std::string &);

        // This public function should be a pure virtual function.
        virtual void calcArea() = 0; // pure virtual function

        // A public virtual function that only prints the value of data member area
        virtual void print() const; // print area

        // Accessor function for name
        // A public function that returns the value of data member name
        std::string getName() const; // return name
};

#endif // BasicShape_h