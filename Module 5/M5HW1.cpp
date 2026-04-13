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

int main() 
{
    int choice;

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

        // Input validation
        if (cin.fail() || choice < 1 || choice > 6) 
        {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please try again.\n";
            continue;
        }

        // Call functions based on user choice
        switch (choice)
        {
            case 1: q1(); cout << "Exiting program...\n"; break;
            case 2: q2(); cout << "Exiting program...\n"; break;
            case 3: q3(); cout << "Exiting program...\n"; break;
            case 4: q4(); cout << "Exiting program...\n"; break;
            case 5: q5(); cout << "Exiting program...\n"; break;
            case 6: cout << "Exiting program...\n"; break;
        }

    } while (choice != 6);

    return 0;
}

void q1() {
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Enter month: ";
    cin >> m1;
    cout << "Enter rainfall for " << m1 << " in inches: ";
    cin >> r1;

    cout << "Enter month: ";
    cin >> m2;
    cout << "Enter rainfall for " << m2 << " in inches: ";
    cin >> r2;

    cout << "Enter month: ";
    cin >> m3;
    cout << "Enter rainfall for " << m3 << " in inches: ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << m1 << ", " << m2 << ", and " << m3
         << " is " << avg << " inches.\n";
}
void q2() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0)
    {
        cout << "Error: All dimensions must be greater than 0.\n";
        return;
    }

    double volume = width * length * height;
    cout << "Volume of the block: " << volume << endl;
    
}
void q3() {
    
}
void q4() {
   
}
void q5() {
    
}
