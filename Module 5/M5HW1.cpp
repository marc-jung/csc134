/*
CSC 134
Marc Jung
M5Lab1 - Choose your own adventure
*/
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

void q1();
void q2();
void q3();
void q4();
void q5();

int main() {
    int choice;
    //user inputs choice in main menu
    do
    {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Average Rainfall\n";
        cout << "2. Block Volume\n";
        cout << "3. Roman Numerals\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        // Check if input failed (non-integer) or is out of range
        if (cin.fail() || choice < 1 || choice > 6) {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please try again." << std::endl;
            choice = 0; // Ensure loop continues
        }
        while (choice < 1 || choice > 6);

        cout << "You chose: " << choice << endl;
        return 0;
}