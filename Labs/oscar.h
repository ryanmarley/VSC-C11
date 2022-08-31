#ifndef OSCAR_H
#define OSCAR_H
#include <cstdlib>
#include <climits>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Oscar {
public:
    Oscar();
    Oscar(string category, string title, string winningPerson, bool personExists);
    string getCategory() const;
    string getTitle() const;
    string getWinningPerson() const;
    bool getPersonExists() const;
    void setCategory(string category);
    void setTitle(string title);
    void setWinningPerson(string winningPerson);
    void setPersonExists(bool personExists);
    void print() const;
    void read(ifstream& fin);
    void write(ofstream& fout);

private:
    string _category;
    string _title;
    string _winningPerson;
    bool _personExists;
};
#endif