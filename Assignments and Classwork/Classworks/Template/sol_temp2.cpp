#include <iostream>
#include <string>
using namespace std;

template < class T >
T minimum(T value1, T value2)
{
	if (value1 < value2)
		return value1;
	else
		return value2;
} // end function template minimum

int main()
{
	// demonstrate minimum with int values
	int int1 = 10; // first int value
	int int2 = 5; // second int value

	// invoke int version of minimum
	cout << "smaller integer value: " << minimum(int1, int2) << endl;

	// demonstrate minimum with char values
	char char1 = 'A'; // first char value
	char char2 = 'D'; // second char value

	// invoke char version of minimum
	cout << "smaller char value: " << minimum(char1, char2) <<endl;

	// demonstrate minimum with string variables
	string str1 = "Hello";
	string str2 = "Good";

	// invoke double version of minimum
	cout << "smaller string:" << minimum(str1, str2) << endl; // works as string supports <
		
} // end main
