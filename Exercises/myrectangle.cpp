#include <iostream>
using namespace std;
#include "myrectangle.h"

MyRectangle::MyRectangle(double newLength, double newWidth) {
    _length = newLength;
    _width = newWidth;
}

void MyRectangle::print() const {
    cout << "length: " << _length
         << "\nwidth: " << _width
         << endl;
}
