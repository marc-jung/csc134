#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //declare variables
    int numPizzas, slicesperpizza, numVisitors;
    const int slicespervisitor = 3;
    
    //user input
    cout << "How many pizzas did you order? ";
    cin >> numPizzas;
    
    cout << "How many slices are there per pizza? ";
    cin >> slicesperpizza;

    cout << "How many visitors are there? ";
    cin >>  numVisitors;

    return 0;
}