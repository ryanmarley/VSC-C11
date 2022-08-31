/**
    CS-11 Exercise 12.5, break_continue.cpp
    Purpose: Implement break and continue 

    @author Ryan Ceballos 
    @version 1.0  04/20/2022
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {9, 3, 4, 6, 5, 4, 0, 9, 8, 6};
    int sum = 0;
    for (unsigned int i = 0; i < nums.size(); i++) {
        if (nums.at(i) == 0) {
            break;
        }
        else {
            sum++;
        }
    }
    cout << "Number of elements until element of value zero is: " << sum << endl;
    cout << "List of integers in vector excluding 4 and 0: ";
    for (unsigned int i = 0; i < nums.size(); i++) {
        if (nums.at(i) == 4 || nums.at(i) == 0) {
            continue;
        }
        cout << nums.at(i) << " ";
    }
    cout << endl;
    return 0;
}