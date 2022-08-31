#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "cengfile22.h"
const int NAME_WIDTH = 18;
const int OCCUPATION_WIDTH = 27;
const int INCOME_WIDTH = 11;

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
void CEngineer::read() {
    cout << "Enter the name of the person: ";
    cin >> ws;
    getline(cin, _name);
    cout << "Enter the occupation for " << _name << ": ";
    getline(cin, _occupation);
    cout << "Enter the income for " << _name << ": ";
    cin >> _income; 
}
void CEngineer::read(ifstream& fin) {
    fin >> ws;
    getline(fin, _name);
    getline(fin, _occupation);
    fin >> _income;
}
void CEngineer::write(ofstream& fout) const {
    fout << _name << endl;
    fout << _occupation << endl;
    fout << fixed << setprecision(2) << _income << endl; 
}
void listContacts(vector<CEngineer>& list) {
    cout << "\nContact list:\n";
    cout << "# " << setw(NAME_WIDTH) << left << "Name";
    cout << setw(OCCUPATION_WIDTH) << left << "Occupation";
    cout << setw(INCOME_WIDTH) << right << "Income" << endl;
    for (unsigned num = 0; num < list.size(); num++) {
        cout << (num + 1) << " ";
        list[num].print(); 
    }
}
void addContact(vector<CEngineer>& list) {
    cout << "\nAdding a new contact:\n";
    CEngineer person;
    person.read();
    list.push_back(person);
}
void deleteContact(vector<CEngineer>& list, int pos) {
    for (unsigned int i = pos - 1; i < list.size() - 1; i++) {
        list.at(i) = list.at(i + 1);
    }
    list.pop_back();
}
void changeIncome(vector<CEngineer>& list) {
    cout << "\nChange income for a contact:";
    listContacts(list);
    cout << "\nEnter the number of the contact: ";
    int pos;
    cin >> pos;
    double income;
    cout << "Enter the new income: ";
    cin >> income;
    list.at(pos - 1).setIncome(income);
}
void sortIncomeRange(vector<CEngineer>& list) {
    cout << "\nSearching by Income\n";
    double minIncome, maxIncome;
    cout << "Enter the minimum income: ";
    cin >> minIncome;
    cout << "Enter the maximum income: ";
    cin >> maxIncome;
    cout << setw(NAME_WIDTH) << left << "Name";
    cout << setw(OCCUPATION_WIDTH) << left << "Occupation";
    cout << setw(INCOME_WIDTH) << right << "Income" << endl;
    for (unsigned int i = 0; i < list.size(); i++) {
        if (list.at(i).getIncome() >= minIncome && list.at(i).getIncome() <= maxIncome) {
            cout << setw(NAME_WIDTH) << left << list.at(i).getName();
            cout << setw(OCCUPATION_WIDTH) << left << list.at(i).getOccupation();
            cout << setw(INCOME_WIDTH) << right << setprecision(2) << fixed << list.at(i).getIncome() << endl;
        }
    }
}
void loadData(vector<CEngineer>& list, string fileName) {
    ifstream fin(fileName);
    if (fin.fail()) {
        cout << "Input file " << fileName << " failed to open.\n";
        exit(-1);
    }
    while(fin.good()) {
        CEngineer person;
        person.read(fin);
        if (fin.good()) {
            list.push_back(person);
        }
    }
    fin.close();
}
void saveData(const vector<CEngineer>& list, string fileName) {
    ofstream fout(fileName);
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < list.size(); i++) {
        list.at(i).write(fout);
    }
    fout.close();
}
void writeReport(vector<CEngineer> list, string fileName) {
    int count = 0;
    ofstream fout(fileName);
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    fout << "CEngineer Contact list:\n";
    fout << "# " << setw(NAME_WIDTH) << left << "Name";
    fout << setw(OCCUPATION_WIDTH) << left << "Occupation";
    fout << setw(INCOME_WIDTH) << right << "Income" << endl;
    for (unsigned i = 0; i < list.size(); i++) {
        fout << (i + 1) << " ";
        fout << setw(NAME_WIDTH) << left << list.at(i).getName();
        fout << setw(OCCUPATION_WIDTH) << left << list.at(i).getOccupation();
        fout << setw(INCOME_WIDTH) << right << setprecision(2) << fixed << list.at(i).getIncome() << endl;
        count++; 
    }
    fout << "Number of contacts: " << count << endl;
    fout.close();
}