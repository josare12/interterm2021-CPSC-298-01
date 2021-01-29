/*
Jose Arellano
2342029
jarellano@chapman.edu
CPSC 298-01
Assignment 2 - sales tax
*/

#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){
  float totalWithTax;
  float totalTax;

  taxRate /= 100;             // tax rate converted to decimal.
  totalTax = cost * taxRate;
  totalWithTax = cost + totalTax; // tax on the item and cost of the item are added together to get the toatal cost including tax.

  return totalWithTax;
}

int main(int argc, char **argv){
  float sodaPrice = 3.0;
  float taxRate = 8;

  cout << "Total: " << addTax(taxRate, sodaPrice) << endl;

  return 0;
}
