#include "curio.h"

Curio::Curio() {
    _price = 0.0;
    _quantity = 0; 
}
Curio::Curio(string name, double price, int quantity) {
    _name = name;
    _price = price;
    _quantity = quantity;
}
string Curio::getName() const {
    return _name;
}
double Curio::getPrice() const {
    return _price;
}
int Curio::getQuantity() const {
    return _quantity;
}
void Curio::setName(string name) {
    _name = name;
}
void Curio::setPrice(double price) {
    _price = price;
}
void Curio::setQuantity(int quantity) {
    _quantity = quantity;
}
double Curio::getValue() const {
    return _price * _quantity;
}
void Curio::print() const {
    cout << setw(20) << left << getName();
    cout << setw(10) << right << getPrice();
    cout << setw(6) << right << getQuantity();
    cout << setw(10) << right << setprecision(2) << fixed << getValue() << endl;
}
void Curio::read(ifstream& fin) {
    fin >> ws;
    getline(fin, _name);
    fin >> _price;
    fin >> _quantity;
}