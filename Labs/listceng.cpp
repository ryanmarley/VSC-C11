/**
    CS-11 Lab 11a, listceng.cpp
    Purpose: Use vector to store class obejcts. My own code for class was used

    @author Ryan Ceballos 
    @version 1.0  04/14/2022
 */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
const int NAME_WIDTH = 18;
const int OCCUPATION_WIDTH = 27;
const int INCOME_WIDTH = 11;
/**
    CS-11 listceng.cpp
    Purpose: CEngineer class that creates objects of people and their occupation and income 
    
    @author Ryan Ceballos
    @version 1.0  04/14/2022
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
        /**
            Method read - gets user input for name, occupation, income
            @param no parameters
            @return void
        */
        void read(); //mutator 

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
void CEngineer::read() {
    cout << "Enter the name of the person: ";
    cin >> ws;
    getline(cin, _name);
    cout << "Enter the occupation for " << _name << ": ";
    getline(cin, _occupation);
    cout << "Enter the income for " << _name << ": ";
    cin >> _income; 
}
/**
    Lists out contacts which are elements stored in a vector 

    @param list Vector filled with contacts
    @return void 
*/
void listContacts(vector<CEngineer>& list);
/**
    Adds a new contact to the list of contacts

    @param list Vector filled with contacts
    @return void
*/
void addContact(vector<CEngineer>& list);
/**
    deletes a selected contact from the contact list 

    @param list Vector filled with contacts
    @param pos Position of contact to delete 
    @return void
*/
void deleteContact(vector<CEngineer>& list, int pos);
/**
    Changes the income of a selected contact 

    @param list Vector filled with contacts
    @return void
*/
void changeIncome(vector<CEngineer>& list);
/**
    Allos user to view only contacts that have an income in a selected range 

    @param list Vector filled with contacts
    @return void
*/
void sortIncomeRange(vector<CEngineer>& list);

int main() {
    vector<CEngineer> ContactList;
    CEngineer person1("Ryan Ceballos", "Computer Systems Analyst", 93730.0);
    CEngineer person2("Lytrell Francis", "Computer Programmer", 89190.0); 
    CEngineer person3("Auzzi Ceballos", "Web Developer", 77200.0);
    ContactList.push_back(person1);
    ContactList.push_back(person2);
    ContactList.push_back(person3);
    int choice = 1;
    while (choice != 0) {
        cout << "\nPlease choose one of the following operations: ";
        cout << "\n0. Exit program\n"
             << "1. List contacts\n"
             << "2. Add a contact\n"
             << "3. Delete a contact\n"
             << "4. Change contact income\n"
             << "5. List by income range\n"
             << "choice (0-5): ";
        cin >> choice;
        if (choice == 1) {
            listContacts(ContactList);
        } 
        else if (choice == 2) {
            addContact(ContactList);
        } 
        else if (choice == 3) {
            cout << "\nDeleting a contact:";
            listContacts(ContactList);
            int pos = 0;
            cout << "Enter the number of the contact: ";
            cin >> pos;
            deleteContact(ContactList, pos);
        } 
        else if (choice == 4) {
            changeIncome(ContactList);
        }
        else if (choice == 5) {
            sortIncomeRange(ContactList);
        }
    }
    cout << endl;
    return 0;
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