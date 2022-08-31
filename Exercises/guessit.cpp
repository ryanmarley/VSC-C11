#include <iostream>
using namespace std;

int main() {
    int guess = 0;
    cout << "I'm thinking of a number between"
         << " 1 and 10.\nCan you guess it?\n\n"
         << "Enter your guess: ";
    cin >> guess;
    cout << "You entered: " << guess << endl;

    if (guess < 1) {
        cout << "Error: guess must be >= 1\n";
        return -1;    //-1 is often used as an error return code
    }
    if (guess > 10) {
        cout << "Error: guess must be <= 10\n";
        return -1;    //-1 is often used as an error return code
    }
    if (7 == guess) {
        cout << "*** Correct! ***" << endl;
    }
    else {
        cout << "Sorry, that is not correct.\n";
        cout << "Rerun and try again.\n";   
    }
    return 0;
}