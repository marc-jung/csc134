// CSC 134
// M4T1 - While
// Marc Jung
// 03/09/2026


#include <iostream>
using namespace std;

void question1();
void question2();

int main()
{
    cout << "M3HW" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "0. Exit" << endl;
    int choice;
    cin >> choice;
    if (1==choice) {
        question1();
    }
    else if (2==choice) {
        question2();
    }
   else if (0==choice) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    return 0; 
}

void question1() {
    // Part 1, just say "hi" five times
    int count = 1;
    while (count <= 5) {
        cout << "Hello number " << count << endl;
        count = count + 1;
    }
    cout << "That's all!";

}
void question2() {
    int min_num = 1, max_num = 10;    //starting & max num to sqaure
    int num = min_num;                //counter

    cout << "Number Number Sqaured\n";
    cout << "------------------------\n";

    while (num <= max_num)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++;     //increment the counter
    }

}