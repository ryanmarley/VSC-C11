/*
    CS-11 Lab 7c, frequently.cpp
    Purpose: Using function to count letters in string.

    @author Ryan Ceballos 
    @version 1.0  03/11/2022
 */
#include <iostream>
#include <vector>
using namespace std;

int frequentLetters(string str, const vector<char>& frequentVect) {
    int letterCounter = 0;
    for(unsigned int i = 0; i < str.size(); i++) {
        for(unsigned int j = 0; j < frequentVect.size(); j++) {
            if (str.at(i) == frequentVect.at(j)) {
                letterCounter += 1;
            }
        }
    }
    return letterCounter;
}

int main() {
    vector<char> frequentVect(10);
    frequentVect.at(0) = 'E';
    frequentVect.at(1) = 'T';
    frequentVect.at(2) = 'A';
    frequentVect.at(3) = 'O';
    frequentVect.at(4) = 'N';
    frequentVect.at(5) = 'e';
    frequentVect.at(6) = 't';
    frequentVect.at(7) = 'a';
    frequentVect.at(8) = 'o';
    frequentVect.at(9) = 'n';
    string userStr;
    int freqLetterCount;

    cout << "Enter a word or phrase: ";
    getline(cin, userStr);
    cout << userStr << endl;
    freqLetterCount = frequentLetters(userStr, frequentVect);
    cout << "Your input contains " << freqLetterCount << " frequent letters.\n";

    
    return 0;
}