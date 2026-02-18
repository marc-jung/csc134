/*
CSC 134
Marc Jung
Q 2
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //declare variables with precision 2
    cout << setprecision(2) << fixed << showpoint;
    const double cost_per_c3 = 0.3;               //cost per cubic feet
    const double charge_per_c3 = 0.52;            //charge per cubic feet
    double length, width, heigth;       
    double cost;                                  //cost of crate 
    double charge;                                //charge of crate
    double profit;                                //profit from selling crate

    //Ask user to enter dimensions of the crate
    cout << "Enter the dimension for the length: ";
    cin >> length;
    cout << "Enter the dimension for the width: ";
    cin >> width;
    cout << "Enter the dimension for the height: ";
    cin >>  heigth;

    //Calculate
    double volume = length * width * heigth;    //volume of crate
    cost = cost_per_c3 * volume;                //caluclating the cost of the build
    charge = charge_per_c3 * volume;            //calculating what to charge customer
    profit = charge - cost;                     //calculating profit

    //Display the data
    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "It cost us $" << cost << " to make this build." << endl;
    cout << "Your total charge will be $" << charge << endl;
    cout << "Our profit is $" << profit << endl;

    return 0;       //no errors
}