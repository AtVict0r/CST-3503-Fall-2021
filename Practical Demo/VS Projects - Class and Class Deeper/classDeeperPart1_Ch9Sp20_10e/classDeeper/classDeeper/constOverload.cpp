// Overloaded Constructors  (Modified from fig3.7)
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;
/*
class GradeBook
{
public:  
      GradeBook( string name )
	  : courseName( name ), courseCode( 0 ) // member initializer
	 //: GradeBook(name, 2) // delegates another constructor -- works
	  {
           cout << " I am constructor with one parameter "  << endl;
     } // end GradeBook constructor
   GradeBook( string name, int code )
    : courseName( name ), courseCode( code ) // member initializer
   {
        cout << " I am constructor with two parameter " << endl;
   }
   int getCode() const
   {
      return courseCode; // return object's courseCode
   } // end function getCode
private:
   string courseName; // course name for this GradeBook   
   int courseCode;
}; // end class GradeBook    

int main()
 {

   // create two GradeBook objects
   GradeBook gradeBook1( "CS101 " );
   GradeBook gradeBook2( "CS102 ", 102);
  
   // display initial value of courseCode for each GradeBook
   cout << "gradeBook1 code: " << gradeBook1.getCode() << endl;
   cout   << "\ngradeBook2 code: " << gradeBook2.getCode() << endl; 

} // end main
*/