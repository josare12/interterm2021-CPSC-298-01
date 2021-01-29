/*
Jose Arellano
2342029
jarellano@chapman.edu
CPSC 298-01
Assignment 1 - Fire Capacity
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int maxRoomCapacity;
  int numPeople;
  int additionalPeople;
  int peopleToExclude;

  cout << "what is the maximum room capacity? ";
  cin >> maxRoomCapacity;

  cout << "How many people are attending? ";
  cin >> numPeople;

  if (numPeople <= maxRoomCapacity) {

    additionalPeople = maxRoomCapacity - numPeople;
    cout << "It is legal to hold the meeting and " << additionalPeople << " more may legally attend." << endl;
  }
  else {
    peopleToExclude = numPeople - maxRoomCapacity;
    cout << "The meeting cannot be held due to fire regulations so " << peopleToExclude << " must be removed." << endl;

  }

  return 0;
}
