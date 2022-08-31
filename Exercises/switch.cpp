/*
    CS-11 Exercise 14.2, swtich.cpp
    Purpose: Create a switch statment

    @author Ryan Ceballos 
    @version 1.0  04/25/2022
 */
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 65, 66 or 67: " << endl;
    cin >> num;
    switch (num) { 
        case 65:
            cout << "A" << endl;
            break; 
        case 66:
            cout << "B" << endl;
            break;
        case 67:
            cout << "C" << endl;
            break;
        default: 
            cout << "oops,  not a valid choice" << endl;
        }
    return 0;
}