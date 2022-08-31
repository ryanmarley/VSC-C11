#include <iostream>
using namespace std;

int main() {
    int num1 = 0; 
    
    cout << "Enter the first numer: "; 
    cin >> num1; 

    double num2 = 0.0; 
    cout << "Enter the second number: ";
    cin >> num2;

    double total; 
    total = num1 + num2; 
    cout << "The sum of " << num1 << " and " << num2 << " is " << total << "." << endl; 

    double totalMult; 
    totalMult = num1 * num2; 
    cout << "The multiplication of " << num1 << " and " << num2 << " is " << totalMult << "." << endl;
     
    return 0;
}