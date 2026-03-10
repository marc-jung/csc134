/* CSC 134
 M3HW1 - Gold
 Marc Jung
03 07 2026 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes (declarations)
// Like a table of contents or glossary
// Just the description, no code
// This is a "method signature" or a "function declaration"
void question1();
void question2();

// main
int main() {
    cout << "Example of HW" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "2. Question 3" << endl;
    cout << "2. Question 4" << endl;
    cout << "0. Exit" << endl;
    int choice;
    cin >> choice;
    if (1==choice) {
        question1();
    }
    else if (2==choice) {
        question2();
    }
    else if (3==choice) {
        question3();
    }
    else if (4==choice) {
        question4();
    }
    else if (0==choice) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    return 0; 
}

// Function definitions
// Like a dictionary -- name, and then all the code
void question1() {
    string answer;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    getline(cin, answer);

    if (answer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK." << endl;
    }

}

void question2() {
    string meal_name = "Taco Plate";
    int num_meals;                      //how many they buy
    double meal_price = 5.99; 
    double sub_total;                   //price before tax/tips
    double tax_rate = 0.08;             //8% is 8/100 ("per cent")
    double tip_amt = 0;                 //$ tipped
    double tax_amt;                     //$ of the actaul tax charges
    double total_price;                 //sub_total + tip + tax
    int order_type;                     //1 = dine in, 2 = takeout

    //get user input
    cout << "Welcome to the CSC 134 Grill." << endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "Enter the price of the meal: ";
    cin >> meal_price;
    cout << "How many would you like? ";
    cin >> num_meals;
    cout << "Enter 1 for Dine In or 2 for Takeaway: ";
    cin >> order_type;

    //do the calculation
    sub_total = meal_price * num_meals;
    tax_amt = sub_total * tax_rate;     //this much is added to the bill

    // add tip if dine in
    if (order_type == 1) {
        tip_amt = sub_total * 0.15;
    }
    //add tax and tip
    total_price = sub_total + tip_amt + tax_amt;

    //present the output with 2 decimal places
    cout << setprecision(2) << fixed;   //remember to import <iomanip>
    cout << "YOUR ORDER" << endl << "-------------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t$" << sub_total << endl;
    cout << "Tip: \t\t$" << tip_amt << endl;
    cout << "Tax: \t\t$" << tax_amt << endl;
    cout << "-------------------------" << endl;
    cout << "Total: \t\t$" << total_price << endl;
    cout << "THANK YOU COME AGAIN" << endl;
}
void question3() {
    string choice1, choice2;

    cout << "WELCOME TO Dungeon Crawl!" << endl;
    cout << "You are walking through a dungeon." << endl;
    cout << "You see two paths ahead." << endl;
    cout << "Do you go LEFT or RIGHT?" << endl;
    cin >> choice1;

    if (choice1 == "left" || choice1 == "LEFT") {
        cout << "Oh no! You fell into a hidden trap." << endl;
        cout << "GAME OVER." << endl;
    }
    else if (choice1 == "right" || choice1 == "RIGHT") {

        cout << "You safely walk down the path and see a room." << endl;
        cout << "Do you ENTER the room or RUN away?" << endl;
        cin >> choice2;

        if (choice2 == "enter" || choice2 == "ENTER") {
            cout << "Inside the castle you find a treasure chest!" << endl;
            cout << "YOU WIN!" << endl;
        }
        else if (choice2 == "run" || choice2 == "RUN") {
            cout << "A dragon spots you while you run away." << endl;
            cout << "You were defeated!" << endl;
        }
        else {
            cout << "You hesitated too long and something finds you..." << endl;
            cout << "DEFEAT." << endl;
        }
    }
    else {
        cout << "You wander aimlessly and get lost in the forest." << endl;
        cout << "GAME OVER." << endl;
    }
}
void question4() {
    int age = 30;
    cout << "Question 4 goes here" << endl;
}