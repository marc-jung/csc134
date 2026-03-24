/*
CSC 134
M4HW1 - Gold
Marc Jung
March 23 2026
*/

#include <iostream>
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
    int i = 1;

    while (i <= 12) {
        answer = firstNum * i;
        cout << firstNum << " times " <<
        i << " is " << answer << endl;
        i++;
    }

}

void question2(){
    //declare variables
    int choice;

    do
    {
    cout << "Please input a number from 1 to 12: ";
    cin >> choice;
    } while (choice < 1 || choice > 12);

    int i = 1;
    int answer;

    while (i <= 12) {
        answer = choice * i;
        cout << choice << " times " <<
        i << " is " << answer << endl;
        i++;
    }
}  

void question3() {
    int choice;

    do
    {
    cout << "Please input a number not between 1 to 12: ";
    cin >> choice;
    } while (choice >= 1 && choice <= 12);

    int i = 1;
    int answer;

    while (i <= 12) {
        answer = choice * i;
        cout << choice << " times " <<
        i << " is " << answer << endl;
        i++;
    }

}