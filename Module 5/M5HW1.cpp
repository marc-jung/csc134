/*
CSC 134
Gold
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
    int num;

    // Keep prompting until valid input is entered
    do
    {
        cout << "Enter a number (1 - 10): ";
        cin >> num;

        if (num < 1 || num > 10)
        {
            cout << "Invalid input. Please enter a number between 1 and 10.\n";
        }

    } while (num < 1 || num > 10);

    cout << "Roman numeral: ";

    switch (num)
    {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    case 10: cout << "X"; break;
    }

    cout << endl;
}
void q4() {
    int choice;

    cout << "\nGeometry Calculator\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    const double PI = 3.14159;

    switch (choice)
    {
    case 1:
    {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;

        if (radius < 0)
        {
            cout << "The radius cannot be less than zero.\n";
            return;
        }

        cout << "Area: " << PI * radius * radius << endl;
        break;
    }
    case 2:
    {
        double length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;

        if (length < 0 || width < 0)
        {
            cout << "Length and width must be positive.\n";
            return;
        }

        cout << "Area: " << length * width << endl;
        break;
    }
    case 3:
    {
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;

        if (base < 0 || height < 0)
        {
            cout << "Only enter positive values for base and height.\n";
            return;
        }

        cout << "Area: " << base * height * 0.5 << endl;
        break;
    }
    case 4:
        cout << "Returning to main menu...\n";
        break;

    default:
        cout << "The valid choices are 1 through 4.\n";
    }
}

void q5() {
    double speed;
    int hours;

    cout << "Enter speed (mph): ";
    cin >> speed;

    cout << "Enter hours traveled: ";
    cin >> hours;

    if (speed < 0 || hours < 1)
    {
        cout << "Invalid input. Speed must be >= 0 and hours >= 1.\n";
        return;
    }

    cout << "\nHour   Distance Traveled\n";
    cout << "------------------------\n";

    for (int i = 1; i <= hours; i++)
    {
        cout << i << "       " << speed * i << endl;
    }
}
