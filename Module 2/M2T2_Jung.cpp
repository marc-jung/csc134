/*
CSC 134
M2T2 - Receipt Calculator
Jung
2026 FEB 16
Goal: A correct looking receipt that handles sales tax.
Assumption: Sales tax is 8% (varies by county)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Making a receipt printer for a restaurant
    //declare all variables
    string meal_name = "Taco Plate";
    int num_meals;                      //how many they buy
    double meal_price = 5.99; 
    double sub_total;                   //price before tax/tips
    double tax_rate = 0.08;             //8% is 8/100 ("per cent")
    double tip_amt;                     //$ tipped
    double tax_amt;                     //$ of the actaul tax charges
    double total_price;                 //sub_total + tip + tax

    //get user input
    cout << "Welcome to the CSC 134 Grill." << endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? ";
    cin >> num_meals;
    cout << "Tip amount? (min 0)? ";
    cin >> tip_amt;

    //do the calculation
    sub_total = meal_price * num_meals;
    tax_amt = sub_total * tax_rate;     //this much is added to the bill
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

    return 0; // no errors
}