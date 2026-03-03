/*
Marc Jung 
CSC 134
M3T1 Ask the user to enter the length and width of
     two rectangles, then display the area of both.
*/

#include <iostream>
using namespace std;

int main() {
    //declare variables
    int lengthOne, widthOne, lengthTwo, widthTwo;
    int areaOne, areaTwo;

    //ask for user input
    cout << "Please enter the length and width of the first\n";
    cout << " rectangle seperated by a space or a newline." << endl;
    cin >> lengthOne >> widthOne;

    cout << "Please enter the length and width of the second\n";
    cout << " rectangle seperated by a space or a newline." << endl;
    cin >> lengthTwo >> widthTwo;

    //calculate the answer
    areaOne = lengthOne * widthOne;
    areaTwo = lengthTwo * widthTwo;

    //display the results
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;

    return 0;
}
