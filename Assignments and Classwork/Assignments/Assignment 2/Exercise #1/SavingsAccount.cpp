#include "SavingsAccount.h"

SavingsAccount::SavingsAccount (const double balance) 
    : savingsBalance(balance) {}

double SavingsAccount::annualBonusRate;

// that calculates the monthly bonus by multiplying the savingsBalance by annualBonusRate divided by 12; 
// this bonus should be added to savingsBalance.
void SavingsAccount::calculateMonthlyBonus(){
    savingsBalance += ((savingsBalance * annualBonusRate) / 12);
}

// d) and use it to set the static annualBonusRate to a new value.
void SavingsAccount::modifyBonusRate(const double newBonusRate){
    annualBonusRate = newBonusRate;
}

double SavingsAccount::getSavingsBalance(){
    return savingsBalance;
}

double SavingsAccount::getAnnualBonusRate(){
  return annualBonusRate;
}