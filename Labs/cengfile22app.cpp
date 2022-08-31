/**
    CS-11 Lab 12b, cengfile22app.cpp
    Purpose: Use vector to store class obejcts. MY OWN CODE was used for the class 
    and EXTRA CREDIT Implemented!

    @author Ryan Ceballos 
    @version 1.0  04/24/2022
 */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#include "cengfile22.h"

int main() {
    vector<CEngineer> ContactList;
    loadData(ContactList, "ceng.txt");
    int choice = 1;
    while (choice != 0) {
        cout << "\nPlease choose one of the following operations: ";
        cout << "\n0. Exit program\n"
             << "1. List contacts\n"
             << "2. Add a contact\n"
             << "3. Delete a contact\n"
             << "4. Change contact income\n"
             << "5. List by income range\n"
             << "99. Write output file report\n"
             << "choice (0-5, 99): ";
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
        else if (choice == 99) {
            writeReport(ContactList, "report.txt");
        }
    }
    cout << endl;
    saveData(ContactList, "ceng.txt");
    return 0;
}