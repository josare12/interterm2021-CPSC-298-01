/*
Jose Arellano
2342029
jarellano@chapman.edu
CPSC 298-01
Assignment 1 - Employee pay
*/

#include <iostream>

using namespace std;

int main(int argc, char ** argv){
  double regularPay = 16.00;
  double overTimePay = 1.5 * regularPay;
  double socialSecurity = 0.0;
  double federalIncomeTax = 0.0;          // every variables except medical insurance, payrate and overtime are set to equal 0;
  double stateIncomeTax = 0.0;
  double grossPay = 0.0;
  double netPay = 0.0;
  const double medicalInsurance = 10.00;   // medical insurance is $10 per week no matter what so it is declared as a constant.

  double hoursWorked = 0.0;

  cout << "Enter the hours worked in a week: " << endl;
  cin >> hoursWorked;

  if(hoursWorked <= 40){
    grossPay = hoursWorked * regularPay;
  }
  else if(hoursWorked > 40){
    grossPay += 40 * regularPay;
    grossPay += (hoursWorked - 40) * overTimePay;
  }

  socialSecurity = grossPay * 0.06;
  federalIncomeTax = grossPay * 0.14;
  stateIncomeTax =  grossPay * 0.05;

  cout << "Social Security: " << socialSecurity << endl;
  cout << "Federal Income Tax: " << federalIncomeTax << endl;
  cout << "State Income Tax: " << stateIncomeTax << endl;

  netPay = grossPay - (socialSecurity + federalIncomeTax + stateIncomeTax + medicalInsurance);
  cout << "Net Pay: " << netPay << endl;

  cout << "Gross Pay: " << grossPay << endl;



  return 0;
}
