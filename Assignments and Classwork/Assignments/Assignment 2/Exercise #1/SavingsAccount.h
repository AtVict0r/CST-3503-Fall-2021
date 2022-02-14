#ifndef SavingsAccount_H
#define SavingsAccount_H

// a) Develop a SavingsAccount class. 
class SavingsAccount {
    private:
    // Use a static data member annualBonusRate to store the annual bonus rate for each of the savers
    static double annualBonusRate;
    
    // b) The class contains a private data member savingsBalance indicating the amount the saver currently has on deposit.
    double savingsBalance;

    public:
    explicit SavingsAccount (double = 0.0);
    
    // c) Provide member function calculateMonthlyBonus
    void calculateMonthlyBonus ();

    // d) Provide a static member function modifyBonusRate that has a parameter
    static void modifyBonusRate(const double);
    
    double getSavingsBalance();

    double getAnnualBonusRate();
};
#endif