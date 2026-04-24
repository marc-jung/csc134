/*
CSC 134
M6T1 - Loops and Arrays
Marc Jung
April 23 2026
*/

#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // Count # of cars per day, two different ways
    method1();
    method2();

    return 0;
}

// Part 1: No arrays
void method1() {
    cout << "\n--- Part 1 (No Arrays) ---" << endl;
    cout << "Enter number of cars counted each day (Mon–Fri)\n";

    const int SIZE = 5;
    int count = 0;
    int cars_today;
    int total = 0;
    double average = 0;

    while (count < SIZE) {
        cout << "Day " << count + 1 << ": ";
        cin >> cars_today;
        total += cars_today;
        count++;
    }

    average = (double) total / SIZE;

    cout << "Total cars = " << total << endl;
    cout << "Average per day = " << average << endl;
}

// Part 2: Using arrays + ASCII graph
void method2() {
    cout << "\n--- Part 2 (With Arrays + Graph) ---" << endl;

    const int SIZE = 5;
    string days[SIZE] = {"M ", "T ", "W ", "Th", "F "};
    int cars[SIZE];
    int total = 0;
    double average = 0;

    // Input
    for (int i = 0; i < SIZE; i++) {
        cout << "Cars on " << days[i] << ": ";
        cin >> cars[i];
    }

    // Output table + total
    cout << "\nDay\tCars" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        total += cars[i];
    }

    average = (double) total / SIZE;

    cout << "Total cars = " << total << endl;
    cout << "Average per day = " << average << endl;

    // ASCII Bar Chart
    cout << "\n--- Bar Chart ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << " | ";
        for (int j = 0; j < cars[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}