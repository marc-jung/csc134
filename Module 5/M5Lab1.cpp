/*
CSC 134
Marc Jung
M5Lab1 - Choose your own adventure
*/
#include <iostream>
using namespace std;

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_go_up_stairs();
void choice_door();


int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } 
  else if (2 == choice) {
    choice_go_home();
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_front_door();  // try again
  }
}

void choice_back_door() { 
    cout << "Try the back door." << endl; 
    cout << "It's open." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go up the stairs?" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_go_up_stairs();
    } 
    else if (2 == choice) {
        choice_go_home();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_back_door();  // try again
  }
}

void choice_go_up_stairs() { 
    cout << "You went up the stairs." << endl; 
    cout << "There is a door" << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the door" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_door();
    } 
    else if (2 == choice) {
        choice_go_home();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_go_up_stairs;  // try again
  }
}

void choice_door() {
    cout << "You entered the room." << endl; 
    cout << "Congrats! You found the artifact." << endl;
    cout << "Now hurry up and run home." << endl;
    choice_go_home();

}

void choice_go_home() { 
    cout << "There is something waiting for you in your home." << endl; 
    cout << "You need the aritfact." << endl;
    cout << "Where is the artifact? It's getting impatient." << endl;
    cout << "Do you:" << endl;
    cout << "1. Have the artifact?" << endl;
    cout << "2. Try to run?" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        cout << "Your wish will be granted. Thank you for playing."
    } 
    else if (2 == choice) {
        cout << "Your body was later discovered torn to pieces. " << endl;
        cout << "Thank you for playing."
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_go_home();  // try again
  }
}
