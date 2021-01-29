/*
Jose Arellano
2342029
jarellano@chapman.edu
CPSC 298-01
Assignment 2 - Conversion
*/

#include <iostream>

using namespace std;

void getData(double& feet,double& inches){   // pass-by-reference parameters used to update the argument variables.
  cout << "Enter length in feet" << endl;
  cin >> feet;
  cout << "Enter length in inches" << endl;
  cin >> inches;
}

void convert(double feet, double inches, double& meter, double& centimeter){  // converts the feet and inches into meters and centimeters.
  meter = feet * 0.3048;          // pass-by-reference variables meter and centimeter declared in the main method and updated with this function.
  centimeter = inches * 2.54;
}

void printData(double feet, double inches, double meter, double centimeter){    // Prints the input length in feet and inches, and then prints their converted measurements.
cout << feet << " feet " << inches << " inches = " << meter << " meters and "
  << centimeter << " centimeters." << endl;
}

int main() {
  double feet,inches,meter,centimeter;
  string quit;

  do{                                              //do while loop used to check the input for the keyword "exit" to stop the program from running.
    getData(feet, inches);
    convert(feet, inches, meter, centimeter);

    printData(feet, inches, meter, centimeter);

    cout << "Do you want to continue (type \"exit\" to quit)?: ";

    cin >> quit;

    }
    while(quit != "exit");

  }
