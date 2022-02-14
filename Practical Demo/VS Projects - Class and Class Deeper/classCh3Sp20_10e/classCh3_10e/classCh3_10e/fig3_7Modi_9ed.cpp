// Using member-initializer list with 2 data members (modified from fig03_07.cpp of 9th edition )
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;
/*
class GradeBook
{
public:
   
   GradeBook( string name, int code )
      : courseName( name ), courseCode( code ) // member initializer for courseName & code
   {
	   cout << "Constructor with " << name << " and " << code << endl;
   }

  void setCourseName( string name )
   {
      courseName = name; // store the course name in the object
   } // end function setCourseName

   // function to get the course name
   string getCourseName() const
   {
      return courseName; // return object's courseName
   } // end function getCourseName

   

   // display a welcome message to the GradeBook user
   void displayMessage() const
   {
      // call getCourseName to get the courseName
      cout << "Welcome to the grade book for\n" << getCourseName()  
         << "!" << endl;
   } // end function displayMessage
private:
   string courseName; // course name for this GradeBook
   
public:   
   int courseCode;
}; // end class GradeBook 

int main()
{
   // create two GradeBook objects
   GradeBook gradeBook1( "CS101 ", 101 );
   GradeBook gradeBook2( "CS102 ", 102);

   //GradeBook gradeBook3; // error as no default construc

   // display initial value of courseName for each GradeBook
   cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
      << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() 
      << endl;
   cout << gradeBook2.courseCode << endl; //possible as courseCode is public
   //cout << gradeBook2.courseName << endl; // error as private

} // end main
*/