#ifndef CURIO_H
#define CURIO_H
#include <cstdlib>
#include <climits>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Curio {
public:
    Curio();
    Curio(string name, double price, int quantity);
    string getName() const;
    double getPrice() const;
    int getQuantity() const;
    void setName(string name);
    void setPrice(double price);
    void setQuantity(int quantity);
    double getValue() const;
    void print() const;
    void read(ifstream& fin);

private:
    string _name;
    double _price;
    int _quantity;
};
#endif