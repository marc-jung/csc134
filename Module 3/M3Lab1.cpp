/*
Marc Jung
CSC 134
FIght or RuN Choice
*/


#include <iostream>
using namespace std;


void choosefight();
void chooserun();

// the lines above tell the program that these functions will 
// exist, but we have to define them later on in the file.

// beginning of the main() method
int main() {
  
  int choice; 

  // ask the question
  cout << "Oh no! You ran into an enemy.\n";
  cout << "Do you want to fight(1) or run(2)?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  if (1 == choice) {
    choosefight();
  }
  else if (2 == choice) {
    chooserun();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////

void choosefight() {
  // this function is called in main if the user chooses 1.
  cout << "You chose to fight" << endl;
  cout << "Congrats! You scared off your attacker. Continue on your journey." << endl;
}

void chooserun() {
  // this function is called in main if the user chooses 2.
  cout << "You chose to run" << endl;
  cout << "You tripped over yourself and fell on the ground. Good Luck!" << endl;
}
