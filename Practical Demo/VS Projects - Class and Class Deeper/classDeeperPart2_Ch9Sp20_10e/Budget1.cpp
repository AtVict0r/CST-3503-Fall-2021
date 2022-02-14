#include "Budget1.h"

// Definition of corpBudget static member variable
double Budget1::corpBudget = 0;

//**********************************************************
// Definition of static member function mainOffice.        *
// This function adds the main office's budget request to  *
// the corpBudget variable.                                *
//**********************************************************

void Budget1::mainOffice(double moffice)
{
   corpBudget += moffice;
}