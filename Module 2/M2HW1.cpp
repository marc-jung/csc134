/*
CSC 134
MSHW1 - GOLD
MARC JUNG
2026 FEB 17
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

    cout << "Question 1 \n" << endl; 
    //Declare variables needed
    cout << setprecision(2) << fixed;
    double balance;
    double amount
    string act_name; 
    char choice;

    //USER INPUT
    cout << "Hello, please input your name below. \n" << act_name;
    cin >> act_name; 

    //generate a random account number
    //Seed with current time to ensure unique numbers
    srand(time(0)); 
    //Generate an 8-digit number (e.g., 10000000 to 99999999)
    long long act_num = 10000000 + rand() % 90000000;
    
    cout << "Bank Account Number: " << act_num << endl;

    //Ask the user what their account balance is
    cout << "Please type in you account balance: $";
    cin >> balance;

    //Ask the user if they want to deposit or withdraw money from account
    while (true) {
        cout << "\nWould you like to (D)eposit, (W)ithdraw, or (Q)uit? ";
        cin >> choice;

        // Convert choice to lowercase for easier comparison
        choice = tolower(choice);

        // Outer if statement for the main menu options
        if (choice == 'd') {
            cout << "Enter deposit amount: $";
            cin >> amount;
            // Nested if statement for deposit validation (e.g., positive amount)
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful. New balance: $" << balance << endl;
            } else {
                cout << "Invalid amount. Deposit must be positive." << endl;
            }
        } else if (choice == 'w') {
            cout << "Enter withdrawal amount: $";
            cin >> amount;
            // Nested if statements for withdrawal validation
            if (amount > 0) {
                if (amount <= balance) { // Check if sufficient funds
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: $" << balance << endl;
                } else {
                    cout << "Insufficient funds. Current balance: $" << balance << endl;
                }
            } else {
                cout << "Invalid amount. Withdrawal must be positive." << endl;
            }
        } else if (choice == 'q') {
            cout << "Thank you for using the Bank Program. Goodbye!" << endl;
            break; // Exit the while loop
        } else {
            cout << "Invalid choice. Please enter D, W, or Q." << endl;
        }
    }

    return 0;
}
