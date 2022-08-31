#include <iostream>
using namespace std;
#include "rectangleclass.cpp"

int main() {
    Rectangle rec;
    Rectangle rec3x5(3.0, 5.0);
    cout << "Printing rec: ";
    rec.print();
    cout << "Printing rec3x5: ";
    rec3x5.print();

    return 0;
}