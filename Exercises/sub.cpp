#include <iostream>
using namespace std;

int sub(int a, int b) {
    int total = a - b;
    return total;
}

int main() {
    cout << "Enter two numbers to subtract: ";
    int num1, num2;
    cin >> num1 >> num2;
    int diff = sub(num1, num2);
    cout << "Difference=" << diff << endl;
    
    return 0;
}