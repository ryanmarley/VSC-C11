#include "rentasst.h"

Property::Property() {
    _address = "123 Example Street";
    _rent = 1234;
    _value = 123456;
}
Property::Property(string address, double rent, double value) {
    _address = address;
    _rent = rent;
    _value = value;
}
string Property::getAddress() const{
    return _address;
}
double Property::getRent() const {
    return _rent;
}
double Property::getValue() const {
    return _value;
}
void Property::setAddress(string address) {
    _address = address;
}
void Property::setRent(double rent) {
    _rent = rent;
}
void Property::setValue(double value) {
    _value = value;
}
void Property::print() const{
    cout << setw(ADDRESS_WIDTH) << left << _address;
    cout << setw(RENT_WIDTH) << left << setprecision(2) << fixed << _rent;
    cout << setw(VALUE_WIDTH) << right << setprecision(2) << fixed <<  _value << endl;
}
void Property::read() {
    cout << "Enter the address of the property: ";
    cin >> ws;
    getline(cin, _address);
    cout << "Enter the rent price for " << _address << ": ";
    cin >> _rent;
    cout << "Enter the market value for " << _address << ": ";
    cin >> _value; 
}
void Property::read(ifstream& fin) {
    fin >> ws;
    getline(fin, _address);
    fin >> _rent;
    fin >> _value;
}
void Property::write(ofstream& fout) const {
    fout << _address << endl;
    fout << fixed << setprecision(2) << _rent << endl;
    fout << fixed << setprecision(2) << _value << endl; 
}