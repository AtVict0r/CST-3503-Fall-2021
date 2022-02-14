#ifndef AUXIL_H
#define AUXIL_H
//#include "Budget.h"  // doesnt work 

class Budget;  // Forward declaration of Budget class. Needed to tell compiler Budget will be defined later 

// Aux class declaration

class AuxiliaryOffice
{
private:
   double auxBudget;
public:
   AuxiliaryOffice() 
      { auxBudget = 0; }
      
   double getDivisionBudget() const
      { return auxBudget; }
      
   void addBudget(double, Budget &);
};

#endif