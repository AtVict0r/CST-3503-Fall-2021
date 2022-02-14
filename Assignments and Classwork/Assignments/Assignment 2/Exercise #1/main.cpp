#include <iostream>
#include "SavingsAccount.h"

// e) Write a driver program (containing main) to test class SavingsAccount.
int main(){
    // Instantiate two different objects of class SavingsAccount
    // saver1 and saver2
    // with balances of $2000.00 and $3000.00, respectively. 
    SavingsAccount saver1(2000);
    SavingsAccount saver2(3000);

    // Set annualBonusRate to 3 percent only once.
    saver1.modifyBonusRate(0.03);

    std::cout << "Saver 1 balance: " << saver1.getSavingsBalance() << std::endl;
    std::cout << "Saver 2 balance: " << saver2.getSavingsBalance() << std::endl << std::endl;

    // calculate the monthly bonus 
    std::cout << "Calculate monthly bonus for saver 1" << std::endl;
    saver1.calculateMonthlyBonus();

    // and print the new balance for object, saver1.
    std::cout << "Saver 1 balance: " << saver1.getSavingsBalance() << std::endl << std::endl;

    // Will the annualBonusRate be same for all objects? 
    std::cout << "Saver 1 annual bonus rate: " << saver1.getAnnualBonusRate() << std::endl;
    std::cout << "Saver 2 annual bonus rate: " << saver2.getAnnualBonusRate() << std::endl;
    
    // Explain your answer
    // Yes, annualBonusRate is a static variable of class SavingsAccount

    return 0;
}