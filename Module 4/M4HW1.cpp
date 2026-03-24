/*
M4HW1 - Gold
Marc Jung
March 23 2026
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void question1();
void question2();
void question3();

int main()
{
    cout << "M4HW1" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
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
    else if (0==choice) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    }

void question1() {

    //declare variables
    int firstNum, answer;
    firstNum = 5;
    int i1 = 1;

    while (i1 <= 12) {
        answer = firstNum * i1;
        cout << firstNum << " times " <<
        i1 << " is " << answer << endl;
        i1++;
    }

}
