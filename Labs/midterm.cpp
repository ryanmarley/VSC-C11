/*
    CS-11 Exercise/Lab X, filename.cpp
    Purpose: The purpose of this program.

    @author Your Name
    @version 1.0  00/00/2018
 */
#include <iostream>
using namespace std;

int main() {
    string myString = "Hello";

    for (unsigned i = 0; i < myString.size(); i++) {
	       		cout << myString.at(i) << " ";
	}


       return 0;
}