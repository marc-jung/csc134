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
    long long start_act_bal, fin_act_bal;
    double deposit, withdrawal; 
    string act_name; 

    //USER INPUT
    cout << "Hello, please input your first and last name below. \n" << act_name;
    cin >> act_name; 

    //generate a random account number
    //Seed with current time to ensure unique numbers
    srand(time(0)); 
    //Generate an 8-digit number (e.g., 10000000 to 99999999)
    long long act_num = 10000000 + rand() % 90000000;
    
    cout << "Bank Account Number: " << act_num << endl;

    
    return 0;
}
