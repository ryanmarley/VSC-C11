/*
    CS-11 Lab 2a, mathworkit.cpp
    Purpose: Improve math and variable skills.

    @author Ryan Ceballos 
    @version 1.0 02/03/22
*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    // Do NOT change the next few lines
    // Read 3 numbers from stdin and print their values to stdout.
    cout << "***Math Worksheet***\n";
    double a = 0.0, b = 0.0, c = 0.0, x = 0.0;
    cout << "Enter three numbers separated by spaces, and press the Enter key";
    cout << "\nFor example: 1 4 2[Enter]: ";
    cin >> a >> b >> c;
    cout << "\nYou entered: a = " << a << ", b = " << b << ", c = " << c
         << "\n\n";
    // Make changes after this line

    x = a + b + c; // change this line for expression 1
    cout << "Expression1 (7): " << x << endl; // do not change line

    x = 0.09 * (a + b + c); // change line for expression 2
    cout << "Expression2 (0.63): " << x << endl; // do not change line

    x = (a - b) * (a + b); // change line for expression 3
    cout << "Expression3 (-15): " << x << endl; // do not change line

    return 0;
}