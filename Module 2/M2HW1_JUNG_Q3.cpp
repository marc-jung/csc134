/*
CSC 134
Marc Jung
Question 3 Pizza Party
*/
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

    //Calculate how many slices you need for the pizza party
    int slicesNeeded = numPizzas * slicesperpizza;
    int pizzaNeeded = numVisitors * slicespervisitor;
    int difference = slicesNeeded - pizzaNeeded;

    if (difference >= 0)
    {
        cout << "There will be " << difference << " slices of pizza left over. \n";
    }
    else 
    {
        cout << "There is not enough pizza for everybody. You are short by ";
        cout << pizzaNeeded - slicesNeeded << " slices. \nOrder more pizza." << endl;
    }

    return 0;
}