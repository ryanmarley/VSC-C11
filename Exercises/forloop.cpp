#include <iostream>
using namespace std;

int main() {
    int max = 0;
    
    cout << "This program writes lists of numbers, starting at 1.\n";
    cout << "Enter the maximum number: ";
    cin >> max;
    cout << "for loop:" << endl;
    for (int i = 1; i <= max; i++) {
        cout << i << endl;
    }
    return 0;
}