/**
    CS-11 Lab 11b, cat.cpp
    Purpose: Using vectors with classes and separating file components
    
    @author Ryan Ceballos
    @version 1.0  04/15/2022
 */
#include <iostream>
#include <vector>
using namespace std;

/**
    CS-11 cat.cpp
    Purpose: Cat class creates objects of cats with their name and age
    
    @author Ryan Ceballos 
    @version 1.0  04/15/2022
 */
class Cat {
    public:
        Cat();
        Cat(string name, int age);
        string getName() const; //accessor 
        int getAge() const; //accessor 
        void setName(string name); //mutator 
        void setAge(int age); //mutator 
        /**
            Method print - prints name, and age
            @param no parameters
            @return void
        */
        void print() const; //accessor

    private:
        string _name;
        int _age;
};
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
/**
    Function Description

    @param parameterName  describe the parameter
    @return describe what is returned from the function
*/
void printOldest(const vector<Cat>& cats);

int main() {
    cout << "CATS!" << endl;
    vector<Cat> catList(3);
    catList.at(0) = Cat("Zuzi", 4);
    catList.at(1) = Cat("Rice", 6);
    catList.at(2) = Cat("Appa", 8);
    printOldest(catList);
    return 0;
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