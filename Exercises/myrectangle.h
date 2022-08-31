#ifndef MYRECTANGLE_H
#define MYRECTANGLE_H

class MyRectangle {
public:
    MyRectangle(double length, double width);
    void print() const;

private:
    double _length;
    double _width;

};
#endif