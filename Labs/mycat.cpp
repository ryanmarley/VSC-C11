#include <iostream>
#include <vector>
using namespace std;
#include "mycat.h"

Cat::Cat() {
    _name = "Zuki";
    _age = 0;
}
Cat::Cat(string name, int age) {
    _name = name;
    _age = age;
}
string Cat::getName() const {
    return _name;
}
int Cat::getAge() const {
    return _age;
}
void Cat::setName(string name) {
    _name = name;
}
void Cat::setAge(int age) {
    _age = age;
}
void Cat::print() const {
    cout << "Oldest cat is " << getName() << " at " << getAge() << " years." << endl;
}
void printOldest(const vector<Cat>& cats) {
    int pos;
    int age = -1;
    for (unsigned int i = 0; i < cats.size(); i++) {
        if (cats.at(i).getAge() > age) {
            pos = i;
            age = cats.at(i).getAge();
        }
    }
    cats.at(pos).print(); 
}