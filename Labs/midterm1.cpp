/** CS-11 Midterm 1, midterm1.cpp
    Purpose: Test my knowledge.
    @author Ryan Ceballos 
    @version 1.0  03/07/2022
 */

#include <iostream> 
using namespace std;
 
int main() {
    string myQuote = "Programming is used in many careers!";
    unsigned int i = 0;
    int sCounter = 0;
    char repeat = 'y';
    char userLetter;
    int userLetterCount = 0;
    char repeatString = 'y';
    string userString;

    for (i = 0; i < myQuote.length(); i++) {
        cout << "char at index " << i << " is " << myQuote.at(i) << endl;
        if (myQuote.at(i) == 's') {
            sCounter += 1;
        }
    }
    cout << "\nCount of letter s in string \"" << myQuote << "\" is " << sCounter << endl;

    do {
        cout << "Do you want to count again? (y/n): ";
        cin >> repeat;
        if (repeat == 'y') {
            cout << "Would you like to enter another string? (y/n) ";
            cin >> repeatString;
            if (repeatString == 'y') {
                cout << "Enter a string: ";
                cin >> ws;
                getline(cin, userString);
                cout << "enter the letter you'd like to count: ";
                cin >> userLetter;
                userLetterCount = 0;
                for (i = 0; i < userString.length(); i++) {
                    cout << "char at index " << i << " is " << userString.at(i) << endl;
                    if (userString.at(i) == userLetter) {
                    userLetterCount += 1;
                    }
                }
                cout << "\nCount of letter " << userLetter << " in string \"" << userString << "\" is " << userLetterCount << endl;
            }
            else {
                cout << "enter the letter you'd like to count: ";
                cin >> userLetter;
                userLetterCount = 0;
                for (i = 0; i < myQuote.length(); i++) {
                    cout << "char at index " << i << " is " << myQuote.at(i) << endl;
                    if (myQuote.at(i) == userLetter) {
                    userLetterCount += 1;
                    }
                }
                cout << "\nCount of letter " << userLetter << " in string \"" << myQuote << "\" is " << userLetterCount << endl;
            }
        }
    } while (repeat == 'y');
    cout << endl;
    return 0;
}