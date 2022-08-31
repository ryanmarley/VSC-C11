/*
    CS-11 Exercise 3.4, nameapp.cpp
    Purpose: Programming Strings 

    @author Ryan Ceballos 
    @version 1.0  02/10/2022
 */
#include <iostream>
using namespace std;

int main() {
    string firstName = " ", lastName = " ", fullName = " "; 

    cout << "First name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName; 

    fullName = firstName + " " + lastName; 
    cout << "Welcome \"" << fullName << "\"!\n"; 

    cout << "Your initials: " << firstName.substr(0, 1) << lastName.substr(0, 1) << endl;

    return 0;
}