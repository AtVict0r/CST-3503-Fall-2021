// Fig. 3.8: Account.h
// Account class with name and balance data members, and a 
// constructor and deposit function that each perform validation.
#include <string>
#include <iostream>

class Account {
public:
   // Account constructor with two parameters  
   Account(std::string accountName, int initialBalance) 
      //: name{accountName}  // assign accountName to data member name
	  : name(accountName), balance(initialBalance) // name=accountName, balance=initialBalance 
       {
	   std::cout << "Constructor with " << name << " and " << balance << std::endl;
	   setBalance(initialBalance);
	   //if (balance < 0) { 
		//   balance = 0;} 	   
      }
//private:
   // function that deposits (adds) only a valid amount to the balance
   void deposit(int depositAmount) {
      if (depositAmount > 0) { // if the depositAmount is valid
         balance = balance + depositAmount; // add it to the balance 
      }
   }

   // function returns the account balance
   int getBalance() const {
      return balance;
   }

   void setBalance(int Amount) {
	   if (Amount >= 0) // if the Amount is valid
		   balance = Amount; //
	   else 
		   balance = 0;
	   }
   

   // function that sets the name
   void setName(std::string accountName) {
      name = accountName;
   }

   // function that returns the name
   std::string getName() const {
      return name;
   }
private:
   std::string name; // account name data member
public:
   //int balance;
   int balance{0}; // not supported in VS2012
   // int balance = 0 ; // // not supported in VS2012
}; // end class Account

