// Fig. 09.30: modified fig09_30.cpp
// static data member tracking the number of objects of a class.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

int main()
{
   // no objects exist; use class name and binary scope resolution 
   // operator to access static member function getCount
   cout << "Number of employees before instantiation of any objects is "
      << Employee::getCount() << endl; // use class name

   // the following scope creates and destroys 
   // Employee objects before main terminates
   {
      Employee e1( "Susan", "Baker" );
      Employee e2( "Robert", "Jones" );

      // two objects exist; call static member function getCount again 
      // using the class name and the binary scope resolution operator
      cout << "Number of employees after objects are instantiated is "
         << Employee::getCount();

      cout << "\n\nEmployee 1: " 
         << e1.getFirstName() << " " << e1.getLastName() 
         << "\nEmployee 2: " 
         << e2.getFirstName() << " " << e2.getLastName() << "\n\n";

	  cout << "Employee 1 count:  " << e1.getCount() << "\nEmployee 2 count:  " << e2.getCount() << endl; 
   } // end nested scope in main

   // no objects exist, so call static member function getCount again 
   // using the class name and the binary scope resolution operator
   cout << "\nNumber of employees after objects are deleted is "
      << Employee::getCount() << endl;

   //cout << Employee::count << endl; // ok if count is public
   //cout << Employee::getFirstName() << endl; // error as getFirstName() not static

} // end main