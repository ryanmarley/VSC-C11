#ifndef CENGFILE22_H
#define CENGFILE22_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
/**
    CS-11 cengfile22.h
    Purpose: CEngineer class that creates objects of people and their occupation and income 
    
    @author Ryan Ceballos
    @version 1.0  04/24/2022
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
        /**
            Loads information about this CEngineer from the file stream.
            @param fin A file input stream connected to the files with the
            data to load.
        */
        void read(ifstream& fin);
        /**
            Writes information about this CEngineer to the file stream.
            @param fout A file output stream connected to the file in
            which to save the data.
        */
        void write(ofstream& fout) const; 

    private:
        string _name;
        string _occupation;
        double _income;
};
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
/**
    Loads all contact data from the specified file name and
    returns the data in a vector of Cengineer objects.

    @param list The list of CEngineer contacts read from the file.
    @param fileName The name of the file from which to read.
*/
void loadData(vector<CEngineer>& list, string fileName);
/**
    Writes contact data to an output file.

    @param list The vector of CEngineer objects.
    @param fileName The name of the file to which to write.
*/
void saveData(const vector<CEngineer>& list, string fileName);
/**
    Writes a report to an output file (extra credit).

    @param list The vector of CEngineer objects.
    @param fileName The name of the file to which to write.
*/
void writeReport(vector<CEngineer> list, string fileName);
#endif