#include <iostream>
#include <cmath>

// d) In a separate file, write a test program (containing main method) that demonstrates class Employee’s capabilities.

#include "Employee.h"

int getYearlySalary(Employee id) {
  return id.getMonthlySalary() * 12;
}

void displayInformation(Employee id);

void raiseMonthlySalary(int amount, Employee &id){
  // find percentage of amount by dividing amount by 100
  float percentage = amount / 100.0;

  // get current monthly salary
  int currentMonthlySalary = id.getMonthlySalary();

  // find percentage of monthly salary by multipling percentage of amount with current monthly salary
  float addToSalary = currentMonthlySalary * percentage;

  // find new salary by adding raise to current salary
  int newSalary = currentMonthlySalary + round(addToSalary);

  // set new salary for employee
  id.setMonthlySalary(newSalary);
}

int main() {
  // i. Create two Employee objects with different names and salaries. 

  Employee employees[2] = {Employee("Jane", 50639), Employee("John", 45702)};

  // display first name, monthly and yearly salary of each employee object
  std::cout << "Employee 1: " << std::endl;
  displayInformation(employees[0]);

  std::cout << "Employee 2: " << std::endl;
  displayInformation(employees[1]);

  // ii. Raise the salary of each Employee (object) by 10 percent. Then display each Employee’s (objects) new yearly salary

  const int raise = 10;

  raiseMonthlySalary(raise, employees[0]);
  raiseMonthlySalary(raise, employees[1]);

  // display new yearly salary
  std::cout << "After "<< raise << "% raise, new yearly salary for employee 1 " << employees[0].getFirstName() << " is $" << getYearlySalary(employees[0]) << " and for employee 2 " << employees[1].getFirstName() << " is $" << getYearlySalary(employees[1]) << "." << std::endl;
}

void displayInformation(Employee id){
  std::cout << "First name is " << id.getFirstName() << std::endl << "Monthly salary is $" << id.getMonthlySalary() << std::endl << "Yearly salary is $" << getYearlySalary(id) << std::endl << std::endl;
}
 