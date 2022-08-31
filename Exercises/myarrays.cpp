/**
    CS-11 Ex 6.2 myarrays.cpp
    Purpose: sum the values in an array, ERROR: putting <= LENGTH prints out a random very small number that isn't a part of array
    @author Ryan Ceballos 
    @version 1.0 03/02/2022
*/
#include <iostream>
using namespace std;
int main() {
    const int LENGTH = 5;
    double temp[] = {2.5, 305, 1, -43, 1000};
    double total = 0.0;
    cout << temp[0] << endl;
    for (int i = 0; i < LENGTH; i++) {
        cout << temp[i] << endl;
        total += temp[i];
    }
    cout << "total is " << total << endl;
 return 0;
}