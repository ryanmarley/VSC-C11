#include "oscar.h"

Oscar::Oscar() {
    _category = " ";
    _title = " ";
    _winningPerson = " ";
    _personExists = 0;
}
Oscar::Oscar(string category, string title, string winningPerson, bool personExists) {
    _category = category;
    _title = title;
    _winningPerson = winningPerson;
    _personExists = personExists;
}
string Oscar::getCategory() const {
    return _category;
}
string Oscar::getTitle() const {
    return _title;
}
string Oscar::getWinningPerson() const {
    return _winningPerson;
}
bool Oscar::getPersonExists() const {
    return _personExists;
}
void Oscar::setCategory(string category) {
    _category = category;
}
void Oscar::setTitle(string title) {
    _title = title;
}
void Oscar::setWinningPerson(string winningPerson) {
    _winningPerson = winningPerson;
}
void Oscar::setPersonExists(bool personExists) {
    _personExists = personExists;
}
void Oscar::print() const {
    cout << setw(22) << left << getCategory()
         << setw(35) << getTitle();
    if (getPersonExists()) {
    cout << setw(15) << getWinningPerson() << endl;
    }
    else {
        cout << setw(15) << "" << endl; 
    }
}
void Oscar::read(ifstream& fin) {
    fin >> ws;
    getline(fin, _category);
    getline(fin, _title);
    getline(fin, _winningPerson);
    fin >> _personExists;
}
void Oscar::write(ofstream& fout) {
    fout << _category << endl;
    fout << _title << endl;
    fout << _winningPerson << endl;
    fout << _personExists << endl;
}