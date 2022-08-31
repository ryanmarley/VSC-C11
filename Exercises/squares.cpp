#include <iostream>
using namespace std;

void printSquares(int length) {
    for (int row = 1; row <= length; row++) {
        for (int col = 1; col <= length; col++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int length = 1;

    while (length > 0) {
        cout << "\nI will print squares for you!\n";
        cout << "Enter the length of a side (-1 to quit): ";
        cin >> length;
        printSquares(length);
    }
    cout << "Thanks for \"squaring\" with me!" << endl;

    return 0;
}