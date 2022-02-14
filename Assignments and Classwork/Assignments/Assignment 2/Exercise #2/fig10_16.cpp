// Fig. 10.16: fig10_16.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"
using std::cout;
using std::endl;

int main()
{
   Complex x;
   Complex y( 4.3, 8.2 );
   Complex z( 3.3, 1.1 );

   cout << "x: " << x << endl;
   cout << "y: " << y << endl;
   cout << "z: " << z << endl << endl;

   x = y + z;
   cout << "x = y + z:" << endl;
   cout << x << " = " << y << " + " << z << endl << endl;

   x = y - z;
   cout << "x = y - z:" << endl;
   cout << x << " = " << y << " - " << z << endl << endl;

   cout << x << " == " << y << "? ";
   (x == y)? cout << "True" << endl : cout << "False" << endl << endl;
   
   x = --y;
   cout << "x = --y:" << ", ";
   y = --y;
   cout << "y = --y:" << endl;
   cout << x << " == " << y << "? ";
   (x == y)? cout << "True" << endl : cout << "False" << endl << endl;   

   return 0;
} // end main

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
