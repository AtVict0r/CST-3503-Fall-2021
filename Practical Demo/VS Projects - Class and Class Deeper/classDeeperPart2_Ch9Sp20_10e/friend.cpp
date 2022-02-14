// Fig. 9.23: fig09_23.cpp  
// Friends can access private members of a class.
#include <iostream>
using namespace std;

// Count class definition 
class Count 
{
  friend void setX( Count& , int ); // friend declaration
public:
   // constructor
   Count() 
      : x( 0 ) // initialize x to 0
   { 
      // empty body
   } // end constructor Count

   // output x 
   void print() const      
   { 
      cout << x << endl; 
   } // end function print
private:
	void Data()       
   { 
      cout << "Data " << x << endl; 
   }

private:
   int x; // data member
}; // end class Count

// function setX can modify private data of Count 
// because setX is declared as a friend of Count (line 9)
void setX( Count &c, int val )
{
	// x = val;
	c.x = val; // allowed because setX is a friend of Count
   c.Data(); // allowed because setX is a friend of Count
   c.print();
} // end function setX

int main()
{
   Count counter; // create Count object

   cout << "counter.x after instantiation: ";
   counter.print();

   setX( counter, 8 ); // set x using a friend function
   cout << "counter.x after call to setX friend function: ";
   counter.print(); // x in object counter has changed as it was passed by reference to setX()
} // end main