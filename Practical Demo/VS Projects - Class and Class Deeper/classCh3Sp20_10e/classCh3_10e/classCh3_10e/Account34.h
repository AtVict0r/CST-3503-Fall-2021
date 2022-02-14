// Fig. 3.4: 
// Account class with a constructor that initializes the account name.
#include <string>

class Account {
public:
   // constructor initializes data member name with parameter accountName
   Account(std::string accountName) 
     : name{ accountName } // name = accountName, not supported in VS2012
	// :  name(accountName) // member initializer, name = accountName

   { 
	 // name = accountName;
   }                                            

   // function to set the account name
   void setName(std::string accountName) {
      name = accountName;
   } 

   // function to retrieve the account name
   std::string getName() const {
      return name; 
   } 
private:
   std::string name; // account name data member
}; // end class Account
