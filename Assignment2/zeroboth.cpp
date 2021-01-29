/*
Jose Arellano
2342029
jarellano@chapman.edu
CPSC 298-01
Assignment 2 - Zero both
*/

#include <iostream>

using namespace std;

void zeroBoth(int& num1, int& num2){    // pass-by-reference used to change the argument variable.
  num1 = 0;
  num2 = 0;

  return;
}

int main(int argc, char **argv) {
  int userVal1 = 3;
  int userVal2 = 3;

  zeroBoth(userVal1, userVal2);                       

  cout << "user value 1: " << userVal1 << endl;
  cout << "user value 2: " << userVal2 << endl;

  return 0;
}
