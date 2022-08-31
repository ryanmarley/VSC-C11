/*
    CS-11 Lab 3b, dragon.cpp
    Purpose: Find your Dragon Name 

    @author Ryan Ceballos 
    @version 1.0  02/11/2022
 */
#include <iostream>
using namespace std;

int main() {
   string firstName = " ", lastName = " ";
   string momName = " ", dadName = " ";
   
   cout << "Want to learn your \"dragon name?\"" << endl;
   cout << "Please enter your first and last name: ";
   cin >> firstName >> lastName;
   cout << "Please enter your mother's first name: ";
   cin >> momName;
   cout << "Please enter your father's first name: ";
   cin >> dadName;
   
   string dragonName = lastName.substr(0, 2) + firstName.substr(firstName.length() - 2, 2)
   + " " + momName.substr(0, 2) + dadName.substr(dadName.length() - 1, 1);
   cout << "Your \"dragon name\" is: \"" << dragonName << "\"\n";

   return 0;
}