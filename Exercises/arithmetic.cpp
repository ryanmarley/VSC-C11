/*
    CS-11 Exercise 2.3a, arithmetic.cpp
    Purpose: Calculator Basic 

    @author Ryan Ceballos 
    @version 1.0  02/02/22
 */
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int a = 5; 
    int b = 2; 

    cout << "a + b = " << a + b << endl; 
    cout << "a - b = " << a - b << endl; 
    cout << "a * b = " << a * b << endl; 
    cout << "a / b = " << a / b << endl; 

    cout << "a + b / 2 = " << a + b / 2 << endl;

    cout << "(a + b) / 2 = " << (a + b) / 2 << endl; 

    cout << "a % b = " << a % b << endl;
    cout << "a / b % b = " << a / b % b << endl;
    cout << "a / (b * b) = " << a / (b * b) << endl;

    cout << "sqrt(a + b) = " << sqrt(a + b) << endl;
    
    return 0;
}