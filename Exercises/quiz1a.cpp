/*
    CS-11 Quiz1A, quiz1a.cpp
    Purpose: Quiz

    @author Ryan Ceballos 
    @version 1.0  02/09/2022
 */
#include <iostream>
using namespace std;

int main() {
    int augie = 55;
    double valerie = 48.0;

    cout << "Enter an integer: ";
    cin >> augie; 
    cout << "You entered: " << augie << endl;

    valerie = augie / 3.1; 
    cout << "The result of " << augie << " divided by 3.1 is: " << valerie << endl;

    if (augie % 2 == 0) {
        cout << augie << " is even" << endl; 
    }
    else { 
        cout << augie << " is not even" << endl; 
    }

    return 0;
}
