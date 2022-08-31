#include <iostream>
using namespace std;

int power(int x, int y);

int main() {
    int x = 0, y = 0;
    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;
    cout << x << "^" << y << " = " << power(x, y) << endl;
    return 0;
}

int power(int x, int y) {
    int product = 0;
    if (y == 0) {
        return 1;
    } 
    else {
        y = y - 1;
        product = power(x, y);
        product = product * x;
        return product;
    }
}