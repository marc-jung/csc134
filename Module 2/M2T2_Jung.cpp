/*
CSC 134
M2T2 - Receipt Calculator
Jung
2026 FEB 16
Goal: A correct looking receipt that handles sales tax.
Assumption: Sales tax is 8% (varies by county)
*/

#include <iostream>
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

    //do the calculation
    sub_total = meal_price * num_meals;

    //present the output
    cout << "YOUR ORDER" << endl << "----------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t$" << sub_total << endl;
    
    return 0; // no errors
}