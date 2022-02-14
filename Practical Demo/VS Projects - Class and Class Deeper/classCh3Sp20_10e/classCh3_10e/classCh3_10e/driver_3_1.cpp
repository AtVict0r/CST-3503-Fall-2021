// Fig. 3.1: AccountTest.cpp
// Creating and manipulating an Account object.
#include <iostream>
#include <string>
#include "Account.h"
//#include "AccountStd.h"
using namespace std;
/*
int main() { 
   Account myAccount; // create Account object myAccount
   // cout << name; // error as cannot access data member of class directly (even if it is public)
   //cout << getName(); // error as can't call func of class directly (even if it is public)

   // show that the initial value of myAccount's name is the empty string
   cout << "Initial account name is: " << myAccount.getName();

   // prompt for and read name
   cout << "\nPlease enter the account name: ";
   string theName;
   //cin >> theName;
   getline(cin, theName); // read a line of text
   myAccount.setName(theName); // put theName in myAccount

   // display the name stored in object myAccount
   cout << "Name in object myAccount is: " 
      << myAccount.getName() << endl;

   // cout  << myAccount.name << endl; // error as name is private
}
*/