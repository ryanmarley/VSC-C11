/*
    CS-11 Exercise 12.3.7, strstreams.cpp
    Purpose: Convert an int to a string

    @author Ryan Ceballos 
    @version 1.0  04/20/2022
 */
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int num = 5723;
    ostringstream outstr;
    outstr << num;
    string strVal = outstr.str();
    string myString = "My integer converted to a string is ";
    string newMessage = myString + strVal;
    cout << newMessage << endl;
    return 0;
}