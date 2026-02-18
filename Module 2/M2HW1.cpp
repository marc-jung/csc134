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
    double start_act_bal, fin_act_bal;
    double deposit, withdrawal; 
    string act_name; 
    char yn, yn2;

    //USER INPUT
    cout << "Hello, please input your first name below. \n" << act_name;
    cin >> act_name; 

    //generate a random account number
    //Seed with current time to ensure unique numbers
    srand(time(0)); 
    //Generate an 8-digit number (e.g., 10000000 to 99999999)
    long long act_num = 10000000 + rand() % 90000000;
    
    cout << "Bank Account Number: " << act_num << endl;

    //Ask the user what their account balance is
    cout << "Please type in you account balance: $";
    cin >> start_act_bal;

    //Ask the user if they want to deposit or withdraw money from account
    cout << "Hello " << act_name << ". Do you want to make a deposit? (y/n): ";
    cin >> yn;
    if (yn == 'n' || 'N')
    {
        cout << "Do you want to make a withdrawal? (y/n): "; 
        cin >> yn2;
        if (yn2 == 'y' || 'Y')
        {
            cout << "Please input how much you like to withdraw: $";
            cin >> withdrawal;
            fin_act_bal = start_act_bal - withdrawal;
            cout << "Your account balance is $" << fin_act_bal;
            cout << "\nHave a good day " << act_name;
            return 0;
        }
        else 
        {
            fin_act_bal = start_act_bal;
            cout << "Your account balance is $" << fin_act_bal;
            cout << "\nHave a good day " << act_name;
            return 0;
        }
    }
    else if (yn == 'y' || 'Y')
    {
        cout << "Please input how much you like to deposit: ";
        cin >> deposit;
        fin_act_bal = start_act_bal + deposit;
        cout << "Your account balance is: " << fin_act_bal;
    }

    return 0;
}
