#include <iostream>
using namespace std;


class Tree
    {
      public:
        static int objectCount;    //static data member declared
		double d =0;
      public:
      void incTree()
         { 
			 objectCount++; 
			 d++;
	     }
    
     static int getObjectCount() // static member function
        { 
		 // incTree(); // cannot access non-static member function 
		 // d = 0; // cannot access non-static data member
		 return objectCount; // can only access static member function or data
	    } 
  };
 
  // must define and initialize static data member outside the class.
  int Tree::objectCount = 0 ;  // cannot write static here
  //int Tree::objectCount;  // default value is 0, cannot write static here
 
int main()
{
        // static members exist even when no objects exists 
	    cout << Tree::objectCount << endl;  // displays 0, 
	    cout << Tree::getObjectCount() << endl; // displays 0
		//cout << Tree::d << endl; // error as d not static
		//cout << Tree::incTree() << endl; // error as incTree() not static

		Tree tr1;
        Tree tr2;
        tr1. incTree(); // increments data members
        tr2. incTree(); // increments data members
       
	   cout << " displaying static data member using objects" << endl;
	   cout << tr1.getObjectCount() << endl;  // displays 2, public static function can be called using object
	   cout << tr2.getObjectCount() << endl;  // displays 2 as each object updates the same static data member
	   cout << " displaying static data member using class::" << endl;
	   cout << Tree::getObjectCount() << endl;  // displays 2, public static function can be called using classname::
	   cout << Tree::objectCount << endl <<endl;  // displays 2, public static data member can be called using classname::
	   cout << tr2.objectCount << endl;  // displays 2, public static data member can be called using object

	   cout << " data member d" << endl;
	   cout << tr1.d << endl; // displays 1 as each object updates its own data member
	   cout << tr2.d << endl; // displays 1 as each object updates its own data member

	   cout << "updating data member d" << endl;
	   tr1.d = 10;                 
	   cout << tr1.d << endl; // displays 10 as object tr1 updates its own data member d
	   cout << tr2.d << endl; // displays 1  as object tr2 's data member d is still 1

	   cout << "updating static data member" << endl;
	   tr1.objectCount = 20;
	   cout << tr1.objectCount << endl; // displays 20 as object tr1 updates shared static data member 
	   cout << tr2.objectCount << endl; // displays also 20  as object tr2 shares same static data member

   }
 