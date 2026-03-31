// CSC 134
// M5T1 - Intro to Functions
// Norrisa
// 3/18/24

// Goal -
// Create one void function,
// and one value returning function
#include <iostream> 
#include <string>
using namespace std;
// Function Prototypes (declarations)
void say_hello();
string formatAnswer(int answer);
int give_the_answer();
int double_a_number(int num);
void printAnswer(string message);

// Function Definitions
int main()
 {
    string message;
    cout << "Hello from main()" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The answer is: " << my_answer << endl;
    // now double the answer
    int twotimes = double_a_number(7);
    cout << "Here's another number: " << twotimes << endl;
    message = formatAnswer(my_answer);
    printAnswer(message);
    return 0; 

 }
 void say_hello() {
    cout << "Hi from say_hello() " << endl;
    return;
 }
int give_the_answer() {
    return 42;
}
int double_a_number(int num) {
     int new_num = num * 2;
     return new_num;
}
string formatAnswwer(int my_answer) {
    // Make a nice looking string containing the answer
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(my_answer);
    return answerMessage;
}
void printAnswer(string msg) {
    // display our message
    cout << msg << endl;
}