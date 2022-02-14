#ifndef BUDGET1_H
#define BUDGET1_H

// Budget class declaration
class Budget1
{
private:
   static double corpBudget;  // Static member variable
   double divisionBudget;     // Instance member variable
public:
   Budget1() 
      { 
		 divisionBudget = 0; 
         //corpBudget = 0;
      }

   void addBudget(double b)
      { divisionBudget += b;
        corpBudget += b; }

   double getDivisionBudget() const
      { return divisionBudget; }

   double getCorpBudget() const
      { return corpBudget; }

   static void mainOffice(double);  // Static member function
};

#endif