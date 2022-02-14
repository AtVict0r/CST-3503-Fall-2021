// updated Fig. 9.23(friend): fig09_23.cpp  
#include <iostream>
using namespace std;
/*
class Count
{
public:
	Count() {
		x = 0;
		p = 0.0;
	} // end constructor Count 
public:
	int x; // data member
	double p;
}; // end class Count

void changeX(Count &c, int val) {
	c.x = val; // allowed because x is public
	c.p = 5.1;
} // end function 

void checkX(Count d, int y) {
	d.x = y; // allowed because x is public
	d.p = 10.2;
	cout << "d.x after changing inside function : " << d.x << endl;
	cout << "d.p after changing inside function : " << d.p << endl;
} // end function 

int main() {
	Count counter; // makes Count object
	cout << "counter.x after instantiation: " << counter.x << endl;
	cout << "counter.p after instantiation: " << counter.p << endl;

	changeX(counter, 8);
	cout << "counter.x after call to changeX function: " << counter.x << endl;
	cout << "changeX() has changed x and p in object counter ";
		cout << " as it was passed by reference." << endl;

	checkX(counter, 10);
	cout << "counter.x after call to checkX function: " << counter.x << endl;
	cout << "counter.p after call to checkX function: " << counter.p << endl;
	
	cout << "checkX() has changed x and p only in object d and not in object counter ";
		cout << " as it was passed by value (not by reference)." << endl;
} // end main

*/