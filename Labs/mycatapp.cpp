/**
    CS-11 Lab 11b, mycatapp.cpp
    Purpose: Using vectors with classes and separating file components 

    @author Ryan Ceballos
    @version 1.0  04/15/2022
 */
#include <iostream>
#include <vector>
using namespace std;
#include "mycat.h"

int main() {
    cout << "CATS!" << endl;
    vector<Cat> catList(3);
    catList.at(0) = Cat("Zuzi", 4);
    catList.at(1) = Cat("Rice", 6);
    catList.at(2) = Cat("Appa", 8);
    printOldest(catList);

    return 0;
}