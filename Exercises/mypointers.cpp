/*
    CS-11 Exercise 8.5, mypointers.cpp
    Purpose: Practice with pointers
    Output: The address of numx is 0x7ff7b2ca5798 and the value of numx is 5.
            The value of ptrp is 0x7ff7b2ca5798 and the value of *ptrp is 5.
            The address of numy is 0x7ff7b2ca5794 and the value of numy is 9.
            The value of ptrq is 0x7ff7b2ca5794 and the value of *ptrq is 9.
            The address of ptrp (not its contents!) is 0x7ff7b2ca5788.
            The address of ptrq (not its contents!) is 0x7ff7b2ca5780.
            
    @author Ryan Ceballos 
    @version 1.0  03/28/2022
 */
#include <iostream>
using namespace std;

int main() {
    int numx, numy; 
    int* ptrp;
    int* ptrq;
    numx = 5;
    numy = 9;
    ptrp = &numx;
    ptrq = &numy;

    cout << "The address of numx is " << &numx << " and the value of numx is " << numx << ".\n";
    cout << "The value of ptrp is " << ptrp << " and the value of *ptrp is " << *ptrp << ".\n";
    cout << "The address of numy is " << &numy << " and the value of numy is " << numy << ".\n";
    cout << "The value of ptrq is " << ptrq << " and the value of *ptrq is " << *ptrq << ".\n";
    cout << "The address of ptrp (not its contents!) is " << &ptrp << ".\n";
    cout << "The address of ptrq (not its contents!) is " << &ptrq << ".\n";

    return 0;
}