#include <iostream>
#include <string>
using namespace std;

// Ship class
class Ship
{
private:
    string name;         // Ship name
    string yearBuilt;    // Year it was built

public:
    // Constructor
    Ship(string n, string y)
    {
        name = n;
        yearBuilt = y;
    }
     
    string getName()
    {
      return name;  
    } 
    string getYear()
    {
      return yearBuilt;  
    }
   

    // pure virtual print function
    virtual void print() = 0;
    
};

// CruiseShip class
class CruiseShip : public Ship
{
private:
    int passengers;		// Number of passengers

public:
    // Constructor.
    // Summary of arguments:
    //	n -- name
    //	y -- year built
    //	p -- number of passengers
    CruiseShip(string n, string y, int p) 
    :Ship(n, y)
    {
        passengers = p;
    }

    // print function
    virtual void print()
    {
      cout << "Name: " << getName() << endl
             << "Year built: " << getYear() << endl;  
      cout << "Maximum passengers: " << passengers << endl;
    }
};

// CargoShip class
class CargoShip : public Ship
{
private:
    int tonnage;	// Cargo tonnage

public:
    // Constructor.
    // Summary of arguments:
    //	n -- name
    //	y -- year built
    //	t -- tonnage
    CargoShip(string n, string y, int t) 
    :Ship(n, y)
    {
        tonnage = t;
    }

    // print function
    virtual void print()
    {
        
      cout << "Name: " << getName() << endl
             << "Year built: " << getYear() << endl; 
    cout << "Cargo capacity: " << tonnage << " tons" << endl;
    }
};

void printShip(Ship *bptr)
{
	bptr->print();
	cout << "  \n";
}

int main()
{    
   CruiseShip cruise("Disney Magic", "1998", 2400);
   CargoShip  cargo ("Black Pearl", "1800", 50000);

    // Call CruiseShip object's print function.
    printShip(&cruise);

    // Call CargoShip object's print function.
    printShip(&cargo);
}