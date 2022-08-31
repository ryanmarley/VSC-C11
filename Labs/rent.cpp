/**
    CS-11 Lab 13, rent.cpp
    Purpose: Final project prototype 

    @author Ryan Ceballos 
    @version 1.0  04/28/2022
 */
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
const int ADDRESS_WIDTH = 18;
//const int OCCUPATION_WIDTH = 27;
const int VALUE_WIDTH = 18; //11
/**
    CS-11 rent.h
    Purpose: 
    
    @author Ryan Ceballos
    @version 1.0  04/28/2022
 */
class Property {
    public:
        Property();//default constructor 
        Property(string address, double value = 0.0);//three parameter constructor 
        string getAddress() const; //accessor 
        //string getOccupation() const; //accessor 
        double getValue() const; //accessor 
        void setAddress(string name); //mutator 
        //void setOccupation(string occupation); //mutator 
        void setValue(double value); //mutator 
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
            Loads information about this Property from the file stream.
            @param fin A file input stream connected to the files with the
            data to load.
        */
        void read(ifstream& fin);
        /**
            Writes information about this Property to the file stream.
            @param fout A file output stream connected to the file in
            which to save the data.
        */
        void write(ofstream& fout) const; 

    private:
        string _address;
        double _value;
};
Property::Property() {
    _address = "";
    _value = 0;
}
Property::Property(string address, double value) {
    _address = address;
    _value = value;
}
string Property::getAddress() const{
    return _address;
}
double Property::getValue() const {
    return _value;
}
void Property::setAddress(string address) {
    _address = address;
}
void Property::setValue(double value) {
    _value = value;
}
void Property::print() const{
    cout << setw(ADDRESS_WIDTH) << left << _address;
    cout << setw(VALUE_WIDTH) << right << setprecision(2) << fixed <<  _value << endl;
}
void Property::read() {
    cout << "Enter the address of the property: ";
    cin >> ws;
    getline(cin, _address);
    cout << "Enter the market value for " << _address << ": ";
    cin >> _value; 
}
void Property::read(ifstream& fin) {
    fin >> ws;
    getline(fin, _address);
    fin >> _value;
}
void Property::write(ofstream& fout) const {
    fout << _address << endl;
    fout << fixed << setprecision(2) << _value << endl; 
}
/**
    Lists out Properties which are elements stored in a vector 

    @param list Vector filled with Properties
    @return void 
*/
void listProperties(vector<Property>& list);
/**
    Adds a new Property to the list of Properties

    @param list Vector filled with Properties
    @return void
*/
void addProperty(vector<Property>& list);
/**
    deletes a selected Property from the Property list 

    @param list Vector filled with Properties
    @param pos Position of Property to delete 
    @return void
*/
void deleteProperty(vector<Property>& list, int pos);
/**
    Changes the income of a selected Property 

    @param list Vector filled with Properties
    @return void
*/
void changeValue(vector<Property>& list);
/**
    Function Description

    @param parameterName  describe the parameter
    @return describe what is returned from the function
*/
void rentIncreaseChecker(vector<Property>& list);
/**
    Function Description

    @param parameterName  describe the parameter
    @return describe what is returned from the function
*/
void rentPriceCalc(vector<Property> & list);
/**
    Allows 

    @param list Vector filled with Properties
    @param fileName The name of the file to read from
    @return void
*/
void loadProperties(vector<Property>& list, string fileName);
/**
    Writes Property data to an output file.

    @param list The vector of Property objects.
    @param fileName The name of the file to which to write.
*/
//void saveData(const vector<Property>& list, string fileName);
/**
    Writes a report to an output file (extra credit).

    @param list The vector of Property objects.
    @param fileName The name of the file to which to write.
*/
//void writeReport(vector<Property> list, string fileName);


int main() {
    vector<Property> PropertyList;
    cout << "\n***RENT ASSISTANT***" << endl;
    char option = 'y';
    string readFileName;
    cout << "Welcome to the rent assitance app! Do you have a file with properties to import? (y/n) ";
    cin >> option;
    if (option == 'y') {
        "Great! Enter your file name: ";
        cin >> readFileName;
        loadProperties(PropertyList, readFileName);
    }
    else {
        cout << "The begin by adding a property with operation two below!" << endl;
    }
    int choice = 1;
    while (choice != 0) {
        cout << "\nPlease choose one of the following operations: ";
        cout << "\n0. Exit program\n"
             << "1. List Properties\n"
             << "2. Add a Property\n"
             << "3. Delete a Property\n"
             << "4. Change Property Market Value\n"
             << "5. Rent Increase Checker\n"
             << "6. Fair Rental Price Calculator\n"
             << "7. Additional Resources\n"
             << "choice (0-7): ";
        cin >> choice;
        if (choice == 1) {
            listProperties(PropertyList);
        } 
        else if (choice == 2) {
            addProperty(PropertyList);
        } 
        else if (choice == 3) {
            cout << "\nDeleting a Property:";
            listProperties(PropertyList);
            int pos = 0;
            cout << "Enter the number of the Property: ";
            cin >> pos;
            deleteProperty(PropertyList, pos);
        } 
        else if (choice == 4) {
            changeValue(PropertyList);
        }
        else if (choice == 5) {
            //FIXME: Parameter change!
            rentIncreaseChecker(PropertyList);
        }
        else if (choice == 6) {
            rentPriceCalc(PropertyList);
        }
        else if (choice == 7) {
            loadResources(PropertyList, "resources.txt");
            //wrtieResoruces(string fileName);
        }
    }
    cout << endl;
    saveData(PropertyList, readFileName);
    //writeReport(PropertyList, "report.txt");
    return 0;
}
void listProperties(vector<Property>& list) {
    cout << "\nProperty list:\n";
    cout << "# " << setw(ADDRESS_WIDTH) << left << "Address";
    cout << setw(VALUE_WIDTH) << right << "Market Value" << endl;
    for (unsigned num = 0; num < list.size(); num++) {
        cout << (num + 1) << ". ";
        list[num].print(); 
    }
}
void addProperty(vector<Property>& list) {
    cout << "\nAdding a new Property:\n";
    Property address;
    address.read();
    list.push_back(address);
}
void deleteProperty(vector<Property>& list, int pos) {
    for (unsigned int i = pos - 1; i < list.size() - 1; i++) {
        list.at(i) = list.at(i + 1);
    }
    list.pop_back();
}
void changeValue(vector<Property>& list) {
    cout << "\nChange market value for a Property:";
    listProperties(list);
    cout << "\nEnter the number of the Property: ";
    int pos;
    cin >> pos;
    double value;
    cout << "Enter the new market value: ";
    cin >> value;
    list.at(pos - 1).setValue(value);
}
void rentIncreaseChecker(vector<Property>& list) {
    int pos;
    double currRent;
    double newRent;
    cout << "\n Rent increase checker: ";
    listProperties(list);
    cout << "\nEnter the number of the Property: ";
    cin >> pos;
    cout << "Enter current rent price: ";
    cin >> currRent;
    cout << "Enter expected rent after increase: ";
    cin >> newRent;
    if (currRent < newRent) {
        cout << "Laws say...." << endl;
    }
    else {
        cout << "Laws say...." << endl;
    }
}
void rentPriceCalc(vector<Property> & list) {
    cout << "\nFair rental price calculator: " << endl;
    listProperties(list);
    cout << "\nEnter the number of the Property: ";
    int pos;
    cin >> pos;
    double price = list.at(pos - 1).getValue()  * .01;
    cout << fixed << setprecision(2) << "Using the 1% rule, a fair rental price for this property with a market value of $"
         << list.at(pos - 1).getValue() << " would be $" << price << endl;
}
void loadProperties(vector<Property>& list, string fileName) {
    ifstream fin(fileName);
    if (fin.fail()) {
        cout << "Input file " << fileName << " failed to open.\n";
        exit(-1);
    }
    while(fin.good()) {
        Property property;
        property.read(fin);
        if (fin.good()) {
            list.push_back(property);
        }
    }
    fin.close();
}
void loadResources(vector<Property>& list, string fileName) {
    string line;
    ifstream fin(fileName);
    if (fin.fail()) {
        cout << "Input file " << fileName << " failed to open.\n";
        exit(-1);
    }
    while(fin.good()) {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
}
void saveData(const vector<Property>& list, string fileName) {
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
/*void writeReport(vector<Property> list, string fileName) {
    int count = 0;
    ofstream fout(fileName);
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    fout << "Property Property list:\n";
    fout << "# " << setw(NAME_WIDTH) << left << "Name";
    fout << setw(OCCUPATION_WIDTH) << left << "Occupation";
    fout << setw(INCOME_WIDTH) << right << "Income" << endl;
    for (unsigned i = 0; i < list.size(); i++) {
        fout << (i + 1) << " ";
        fout << setw(NAME_WIDTH) << left << list.at(i).getAddress();
        fout << setw(INCOME_WIDTH) << right << setprecision(2) << fixed << list.at(i).getIncome() << endl;
        count++; 
    }
    fout << "Number of Properties: " << count << endl;
    fout.close();
}
*/