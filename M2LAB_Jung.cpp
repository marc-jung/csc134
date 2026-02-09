// CSC 134
// M2T1 - Product Sales
// Marc Jung
// 2026 FEB 08
#include <iostream>
using namespace std;

int main() {

    string first_name, last_name, full_name; // holds customer name
    string product = "redbull";
    double cost_each = 0.99;
    double total_cost;

    //Greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to me meet you, " << full_name << endl;

    //Ask how much they like

    //calculate total cost
    //Give the result

    cout << endl;
    return 0; // no errors
}