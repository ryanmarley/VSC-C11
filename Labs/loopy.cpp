/**
    CS-11 Lab 5a, loopy.cpp
    Purpose: Loops and characters.

    @author Ryan Ceballos 
    @version 1.0 02/24/2022
*/
#include <iostream>
using namespace std;

int main() {
    int myNum; // the integer number
    char myChar; // the single character
    cout << "** Loopy Characters!**\n\n";
    cout << "Enter an integer between 1 and 20: ";
    cin >> myNum;
    cout << "Enter a single character: ";
    cin >> myChar;
    cout << endl;
   int i = 0;
    // Repeating the char myNum times with a for-loop.
    cout << "#1. Printing " << myChar << " " << myNum << " times:\n";
    for (i = 0; i < myNum; ++i) {
       cout << myChar; 
    }   
    cout << endl << endl;

    // Printing starting with myChar and the following myNum ASCII chars.
    cout << "#2. Printing starting with " << myChar << " and the following " << myNum - 1
         << " ASCII characters:\n";
    for (i = static_cast<int>(myChar); i < static_cast<int>(myChar) + myNum; ++i) {
       cout << static_cast<char>(i);
    }
    cout << endl << endl;

    // Repeating myChar myNum times with @ characters on even indexes.
    cout << "#3. Printing " << myChar << " character " << myNum
         << " times substituting '@' on even indexes:\n";
    for (i = 1; i <= myNum; ++i) {
       if (i % 2 == 0) {
          cout << "@";
       }
       else {
          cout << myChar;
       }
    }
    cout << endl << endl;

    // Repeating the myChar myNum times with stars (*) every 3 chars
    cout << "#4. Printing " << myChar << " character " << myNum
         << " times substituting (*) every third character:\n";
    for (i = 1; i <= myNum; ++i) {
       if (i % 3 == 0) {
          cout << "*";
       }
       else {
          cout << myChar;
       }
    }
    cout << endl << endl;

    cout << "#5. Printing " << myNum << " lines of the previous loop:\n";
    // Hint: put your for-loop from the previous challenge inside another
    // for-loop that has a different counting variable.
    for (int j = 0; j < myNum; ++j) {
       for (i = 1; i <= myNum; ++i) {
         if (i % 3 == 0) {
          cout << "*";
         }
         else {
          cout << myChar;
         }
      }
    cout << endl;
    }
      
    

    return 0;
}