/*
    CS-11 Lab 8c, moreorless.cpp
    Purpose: Use pointers with functions. 

    @author Ryan Ceballos 
    @version 1.0  03/31/2022
 */
#include <iostream>
using namespace std;

/*
    Doubles the value pointed to by the 2nd parameter if the 2nd parameter value is larger than the 1st parameter.

    @param a First user number entered 
    @param *ptrb Points to the second user number entered 
    @return the original value that ptrb points to
*/
double doubleIfMore(double a, double* ptrb);

int main() {
    double num1, num2; 

    cout << "Compare two floating point numbers\n";
    char repeat = 'y';
    do {
        cout << "Enter two numbers separated by a space: ";
        cin >> num1 >> num2;
        double result = doubleIfMore(num1, &num2);
        cout << "in main(), after doubleIfMore num1 is " << num1 << " num2 is " << num2 << endl;
        cout << "in main(), returned value from doubleIfMore is " << result << endl;
        cout << "\nWould you like to compare more numbers? (y/n) ";
        cin >> repeat; 
    } while (repeat == 'y');
    cout << endl;
    
    return 0;
}

double doubleIfMore(double a, double* ptrb) {
    double oldNum = *ptrb;
    if (*ptrb > a) {
        cout << *ptrb << " is greater than " << a << endl; 
        *ptrb *= 2; 
    }
    else if (a > *ptrb) {
        cout << *ptrb << " is less than " << a << endl;
    }
    else {
        cout << a << " is equal to " << *ptrb << endl;
    }
    return oldNum; 
}