/*
Jose Arellano
2342029
jarellano@chapman.edu
CPSC 298-01
Assignment 2 - int array
*/
#include <iostream>

using namespace std;

int main(int argc, char **argv){
  const int numElements = 10;       //size of the array is 10 so a consant int is used.
  int myList[numElements];
   cout << "Enter ten non-negative integers" << endl;

   for(int i = 0; i < numElements; ++i){
     cin >> myList[i];                      // iterates through each element of the array and asks for an input to store at that element.

     if(myList[i] < 0){       // checks if the input is a non-negative number and asks for another input if it is not.
       cout << "Enter non-negative numbers only" << endl;
       cin >> myList[i];
     }
    }

    for(int i = 0; i < numElements; ++i){
       cout << "Value: ";                   //prints out each value stored in the array.
       cout << myList[i] << endl;
    }

    return 0;
  }
