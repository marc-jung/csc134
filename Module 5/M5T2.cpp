/*
*/
#include <iostream>
using namespace std;

//given two numbers, print them out in a line
void printAnswerLine(int number, int result) {
    cout << number << " squared =\t" << result << endl;
}

//given a number, return the square of it
int sqaure(int number) {
    int result;
    result = number * number;
    return result;
}
int main() {
    //count some numbers and find the result for each
    int count = 1;
    int result;

    while (count <= 10) {
        result = sqaure(count); 
        printAnswerLine(count, result);
        count++;
    }
}