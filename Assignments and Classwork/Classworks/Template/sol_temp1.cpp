#include<iostream>
#include <string>
using namespace std;

template <typename T>
T cube(T x)
{
	return x*x*x;
}

/*
int main()
{
	int x = 10;
	float y = 3.3;
	double z = 4.5;
	string str = "Hello";

	cout << "cube of x" << cube(x) << endl;
	cout << "cube of y" << cube(y) << endl;
	cout << "cube of z" << cube(z) << endl;

// cout<<"cube of string " << cube(str)<<endl; // error as string doesnt support *

	return 0;
}
*/
