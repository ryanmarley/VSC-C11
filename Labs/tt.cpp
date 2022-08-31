/**
    CS-11 Lab 8a, funwork22.cpp
    Purpose: Practice writing functions.

    @author Ryan Ceballos 
    @version 03/19/2022
*/
#include <iostream>
#include <vector>
using namespace std;

/**
    #1 Given two temperatures, return true if one is less than 0
    and the other is greater than 100.
    @param temp1 First temperature to test.
    @param temp2 Second temperature to test.
    @return true if icy-hot; otherwise false.

    Test cases:
    icyHot(120, -1) ? true
    icyHot(-1, 120) ? true
    icyHot(2, 120) ? false
*/
bool icyHot(int temp1, int temp2);
/**
    #2 Given a char, uses ASCII to determine if it is a letter (not a number).
    @param num The character to test.
    @returns true if num is a letter (a-z or A-Z); otherwise returns false.
    Do not use use isalpha() or other string functions
    Test cases:
    isLetter('a') ? true
    isLetter('3') ? false
*/
bool isLetter(char num);
/**
    #3 Given a string, capitalize all letters in the string using ASCII codes
    and if statements. Do NOT use toupper() or similar string functions.
    @param str The string to convert, which is returned by reference.

    Test cases:
    capitalizeString("I love cookies!") -> "I LOVE COOKIES!"
    capitalizeString("124 East Central Ave") -> "124 EAST CENTRAL AVE"
*/
void capitalizeString(string& str);
/**
    #4 Given a string, converts any number in the string to a '*'.
    @param str The string to convert, which is returned by reference.
    Do not use isdigit or other string function
    Test cases:
    starIt("123 East 9th St") -> "*** East *th St"
    starIt("Agent 007") -> "Agent ***"
    Hint: Use a for loop, and string indexing.
*/
void starIt(string& str);
/**
    #5 Prints the contents of a vector with a for loop all on one line with a
    space between each number. Ends by printing a newline.
    @param data The vector of ints to print.
*/
void printVector(const vector<int>& data);
/**
    #6 Given a vector of ints, return true if the vector is size 2 or more,
    AND the second element and the last element are equal.
    @param data     An vector of int numbers.

    Test cases:
    equalSecondLast([1, 2, 3], 3) ? false
    equalSecondLast([5, 1, 3, 1], 4) ? true
    equalSecondLast([1, 2, 2], 3) ? true
    equalSecondLast([1,5], 2) ? true
    equalSecondLast([1], 1) ? false
*/
bool equalSecondLast(const vector<int>& data);
/**
    #7 Given a vector of ints, multiplies each element in the vector by itself.
    @param data A vector of int numbers.

    Test cases:
    squareVector([1, 2, 3], 3) -> [1, 4, 9]
    squareVector([3, 5, 6, 8, 9], 5) -> [9, 25, 36, 64, 81]
    squareVector([3], 1) -> [9]
*/
void squareVector(vector<int>& data);

int main() {
    bool answer = false;
    string str;
    cout << boolalpha;

    cout << "***Testing icyHot***" << endl;
    answer = icyHot(120, -1);
    cout << "icyHot1 should be true: " << answer << endl;
    answer = icyHot(-1, 120); 
    cout << "icyHot2 should be true: " << answer << endl;
    answer = icyHot(2, 120);
    cout << "icyHot3 should be false: " << answer << endl;

    cout << "\n***Testing isLetter***" << endl;
    answer = isLetter('a');
    cout << "isLetter1 should be true: " << answer << endl;
    answer = isLetter('9');
    cout << "isLetter2 should be false: " << answer << endl;

    cout << "\n***Testing capitalizeString***" << endl;
    str = "I love cookies!";
    capitalizeString(str); 
    cout << "capitalize1 should print I LOVE COOKIES!: " << str << endl;
    str = "124 East 9th St";
    capitalizeString(str);
    cout << "capitalize2 should print 124 EAST 9TH ST: " << str << endl;

    cout << "\n***Testing starIt***" << endl;
    str = "123 East 9th Ave";
    starIt(str);
    cout << "starIt1 should be *** East *th Ave: " << str << endl;
    str = "Agent 007";
    starIt(str);
    cout << "starIt2 should be Agent ***: " << str << endl;
    str = "Phone (123) 456-7890";
    starIt(str);
    cout << "starIt3 should be Phone (***) ***-****: " << str << endl;

    cout << "\n***Testing printVector***" << endl;
    const int A3 = 3;
    vector<int> myVect1 = {1, 2, A3};
    cout << "printVector1 should be 1 2 3: ";
    const int A1 = 1, A5 = 5, A10 = 10, A30 = 30, A50 = 50, A79 = 79;
    printVector(myVect1);
    vector<int> myVect2 = {A10, A30, A50, A79, A30};
    cout << "printVector 2 should be 10 30 50 79 30: ";
    printVector(myVect2);
    vector<int> myVect3 = {A3};
    cout << "printVector 3 should be 3: ";
    printVector(myVect3);
    const vector<int> myVect4 = {A1, A5};
    cout << "printVector 4 should be 1 5: ";
    printVector(myVect4);

    cout << "\n***Testing equalSecondLast***" << endl;
    answer = equalSecondLast(myVect1);
    cout << "equalSecondLast1 should be false: " << answer << endl;
    answer = equalSecondLast(myVect2);
    cout << "equalSecondLast2 should be true: " << answer << endl;
    answer = equalSecondLast(myVect3);
    cout << "equalSecondLast3 should be false: " << answer << endl;
    answer = equalSecondLast(myVect4);
    cout << "equalSecondLast4 should be true: " << answer << endl;

    cout << "\n***Testing squareVector***" << endl;
    squareVector(myVect1);
    cout << "squareVector1 should print 1 4 9: ";
    printVector(myVect1);
    const int A6 = 6, A8 = 8, A9 = 9;
    vector<int> myVect5 = {A3, A5, A6, A8, A9};
    squareVector(myVect5);
    cout << "squareVect5 should print 9 25 36 64 81: ";
    printVector(myVect5);
    squareVector(myVect3);
    cout << "squareVect3 should print 9: ";
    printVector(myVect3);

    cout << "\n*** End of Tests ***" << endl;

    return 0;
}

bool icyHot(int temp1, int temp2) {
    if ((temp1 < 0 || temp2 < 0) && (temp1 > 100 || temp2 > 100)) {
        return true;
    }
    else {
        return false; 
    } 
}

bool isLetter(char num) {
    if ((num >= 'A' && num <= 'Z') || (num >= 'a' && num <= 'z')) {
        return true;
    }
    else {
        return false;
    }
}

void capitalizeString(string& str) {
    for (unsigned int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ' '; //[space] = 32 -> so 'z' - ' ' = 'Z' 
        }
    }
}

void starIt(string& str){
    for (unsigned int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str[i] = '*';
        }
    }
}

void printVector(const vector<int>& data) {
    for (unsigned i = 0; i < data.size(); i++) {
        if (i == data.size() - 1) {
            cout << data.at(i) << endl;
        }
        else{
            cout << data.at(i) << " ";
        }
    }
}

bool equalSecondLast(const vector<int>& data) {
    bool answer; 
    if ((data.size() >= 2)&&(data[1] == data[data.size()-1])){
            answer = true;
      }else{
         answer = false;
        }
        return answer;
}

void squareVector(vector<int>& data) {
    for (unsigned i = 0; i < data.size(); i++) {
        data.at(i) *= data.at(i);
    }
}