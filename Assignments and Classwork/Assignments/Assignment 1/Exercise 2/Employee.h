#include <string>

// a) In a header file, create a class called Employee 
class Employee {
  // that includes two pieces of information as private data members—a first name (type string) and a monthly salary (type int).

  private:
  std::string firstName;  // data member containing employee's first name
  int monthlySalary;

  void validateMonthlySalary() {
    if(monthlySalary < 0) {monthlySalary = 0;}
  }

  public:
  // b) Your class should have a constructor that initializes the two data members.

  Employee(std::string employeeFirstName, int initialSalary) : firstName(employeeFirstName), monthlySalary(initialSalary) {
    validateMonthlySalary();
  }

  // c) Provide a set and a get function for each data member. If the parameter of the set function for monthly salary is not positive, then monthly salary should be set to 0.
  
  // member function that sets the first name in the object
  void setFirstName(std::string newFirstName) { 
    firstName = newFirstName; // store the first name
  } 

  // member function that sets the first name in the object
  void setMonthlySalary(int newSalary) {
    monthlySalary = newSalary; // store the monthly salary
    validateMonthlySalary();
  }
  
  // member function that retrieves the first name from the object
  std::string getFirstName() const {
    return firstName; // return first name's value to this function's caller 
  }
  
  // member function that retrieves the monthly salary from the object
  int getMonthlySalary() const {
    return monthlySalary; // return monthly salary's value to this function's caller 
  }
}; // end class Employee

