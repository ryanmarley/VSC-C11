#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle();
    Rectangle(double newLength, double newWidth);
    void print();
private:
    double _length;
    double _width;
};

Rectangle::Rectangle() {
    _length = 0;
    _width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth) {
    _length = newLength;
    _width = newWidth;
}

void Rectangle::print() {
    cout << _length << " long x " << _width << " wide\n";
}

// For testing
