/*
Jose Arellano
2342029
jarellano@chapman.edu
CPSC 298-01
Assignment 1 - Cereal
*/
#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

  double weightOunces;                // variable for user input, which is the cereal weight in ounces
  double weightMetricTons;            // variable to the cereal weight in metric tons after conversion;
  const double ozInMetricTons = 35273.92;   // conversion factor to go from ounces to metric tons.
  double numBoxes;                    // number of boxes to yield one metric ton.

  cout << "Enter the weight of the package of cereal: ";
  cin >> weightOunces;

  weightMetricTons = weightOunces / ozInMetricTons;

  cout << "Weight in metric tons: " << weightMetricTons << endl;

  numBoxes = ozInMetricTons / weightOunces;
  cout << "Number of boxes to yield one metric ton: " << numBoxes << endl;

  return 0;
}
