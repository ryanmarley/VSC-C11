/**
    CS-11 Lab 10a, cengineer.cpp
    Purpose: Declare programming interface and test it.

    @author Ryan Ceballos 
    @version 1.0  04/07/2022
 */
#include <iostream>
#include <iomanip>
using namespace std;
const int NAME_WIDTH = 18;
const int OCCUPATION_WIDTH = 27;
const int INCOME_WIDTH = 11;
/**
    CS-11 cengineer.cpp
    Purpose: CEngineer class that creates objects of people and their occupation 
    
    @author Ryan Ceballos
    @version 1.0  04/07/2022
 */
class CEngineer {
    public:
        CEngineer();//default constructor 
        CEngineer(string name, string occupation, double income);//three parameter constructor 
        string getName() const; //accessor 
        string getOccupation() const; //accessor 
        double getIncome() const; //accessor 
        void setName(string name); //mutator 
        void setOccupation(string occupation); //mutator 
        void setIncome(double income); //mutator 
        /**
            Method print - prints name, occupation, and income
            @param no parameters
            @return void
        */
        void print() const; //accessor 

    private:
        string _name;
        string _occupation;
        double _income;
};
CEngineer::CEngineer() {
    _income = 0;
}
CEngineer::CEngineer(string name, string occupation, double income) {
    _name = name;
    _occupation = occupation;
    _income = income;
}
string CEngineer::getName() const{
    return _name;
}
string CEngineer::getOccupation() const {
    return _occupation;
}
double CEngineer::getIncome() const {
    return _income;
}
void CEngineer::setName(string name) {
    _name = name;
}
void CEngineer::setOccupation(string occupation) {
    _occupation = occupation;
}
void CEngineer::setIncome(double income) {
    _income = income;
}
void CEngineer::print() const{
    cout << setw(NAME_WIDTH) << left << _name;
    cout << setw(OCCUPATION_WIDTH) << left << _occupation;
    cout << setw(INCOME_WIDTH) << right << setprecision(2) << fixed <<  _income << endl;
}

int main() {
    cout << "Computer Engineers:\n";
    CEngineer person1("Ryan Ceballos", "Computer Systems Analyst", 93730.0);
    CEngineer person2("Lytrell Francis", "Computer Programmer", 89190.0); 
    CEngineer person3; 
    person3.setName("Auzzi Ceballos");
    person3.setOccupation("Web Developer");
    person3.setIncome(77200.0);
    cout << setw(NAME_WIDTH) << left << "Name";
    cout << setw(OCCUPATION_WIDTH) << left << "Occupation";
    cout << setw(INCOME_WIDTH) << right << "Income" << endl;
    person1.print();
    person2.print();
    person3.print();

    return 0;
}