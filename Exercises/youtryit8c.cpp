#include <iostream>
using namespace std;

int main() {
    int myInt = 7;
    int* myIntPtr = &myInt; 

    cout << "address of myInt: " << &myInt << endl;
    cout << "value of myInt: " << myInt  << endl;
    cout << "value of myIntPtr: " << myIntPtr << endl;
    cout << "dereference of pointer: " << *myIntPtr << endl;
    cout << &myIntPtr << endl; 
    
    return 0;
}