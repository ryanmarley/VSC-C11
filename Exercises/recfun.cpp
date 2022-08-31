#include <iostream> //Hi
#include <vector>
#include <string>
using namespace std;

void printDown(int number);

void printUp(int number);

void printReversed(string myString, int index);

void printStars(int number);

int bunnyEars(int number);

int factorial(int number);

int sum(int number);

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;
    cout << "Counting down: ";
    printDown(number);

    cout << "\nCounting up: ";
    printUp(number);

    cout << "\nPrinting stars: ";
    printStars(number);

    cout << "\nCounting bunny ears: ";
    int numEars = bunnyEars(number);
    cout << "bunnyEars(" << number << ") -> " << numEars << endl;

    cout << "\nFactorial of " << number << ": ";
    cout << factorial(number);

    cout << "\nSumming numbers 1 to " << number << ": ";
    int total = sum(number);
    cout <<  "sum(" << number << ") -> " << total << endl;

    cout << "\nCounting the number of digits in an integer:\n";
    //int testValue;
    //cout << "\nPlease enter another number: ";
    //cin >>  testValue;
    //int numDigits = digits(testValue);
    //cout << "You need " << numDigits << " digits to represent "
    //     << testValue << " in decimal\n";

    cout << "\nEnter a string: ";
    cin >> ws;
    string str;
    getline(cin, str);
    cout << "String reversed: ";
    printReversed(str, 0);

    cout << endl;
    return 0;
}

void printDown(int number) {
    if (number == 0) {
        cout << "0";
    } else {
        cout << number << ' ';
        number--;
        printDown(number);
    }
}

void printUp(int number) {
    if (number == 0) {
        cout << "0 ";
    } else {
        printUp(number - 1);
        cout << number << ' ';
    }
}

void printReversed(string myString, int index) {
    if (index == static_cast<int>(myString.length() - 1)) {
        cout << myString.at(0);
    } else {
        cout << myString.at(myString.length() - (1 + index));
        ++index;
        printReversed(myString, index);
    }
}

void printStars(int number) {
    if (number == 0) {
        cout << "";
    } else {
        cout << '*';
        number--;
        printStars(number);
    }
}

int bunnyEars(int number) {
    if (number == 0) {
        return 0;
    } else {
        int ears = bunnyEars(number - 1);
        ears = ears + 2; 
        return ears;
    }
}

int factorial(int number) {
    int result;
    if (number <= 1) {
        result = 1;
    } else {
        result = number * factorial(number - 1);
    }
    return result;
}

int sum(int number) {
    int result;
    if (number <= 1) {
        result = 1;
    } else {
        result = number + sum(number - 1);
    }
    return result;
}
