/**
    CS-11 Final Project, rentasstapp.cpp
    Purpose: designed for renters, and landlords and its main functions revolve around rental properties,
    with features such as calculating fair rental prices, and determining legality of rent increases.

    @author Ryan Ceballos 
    @version 1.0  05/10/2022
 */
#include "rentasst.h"

/**
    Lists out Properties which are elements stored in a vector 

    @param list Vector filled with Properties
    @return void 
*/
void listProperties(vector<Property>& list);
/**
    Adds a new Property to the list of Properties

    @param list Vector filled with Properties
    @return string of the address that was added
*/
string addProperty(vector<Property>& list);
/**
    deletes a selected Property from the Property list 

    @param list Vector filled with Properties
    @return string of the address that was deleted
*/
string deleteProperty(vector<Property>& list);
/**
    Changes the market value of a selected Property 

    @param list Vector filled with Properties
    @return void
*/
void changeValue(vector<Property>& list);
/**
    Changes the rent price of a selected Property 

    @param list Vector filled with Properties
    @return void
*/
void changeRent(vector<Property>& list);
/**
    Checks if the increase in rent is legal 

    @param list Vector filled with Properties
    @return void
*/
void rentIncreaseChecker(vector<Property>& list);
/**
    Calculates the a fair rental price based on market value of property

    @param list Vector filled with Properties
    @return void
*/
void rentPriceCalc(vector<Property>& list);
/**
    Allows user to load in properties from a file 

    @param list Vector filled with Properties
    @param fileName The name of the file to read from
    @return void
*/
void loadProperties(vector<Property>& list, string fileName);
/**
    Reads resource data from file then print it out

    @param fileName The name of the file to read from
    @return describe what is returned from the function
*/
void loadResources(string fileName);
/**
    Writes Property data to an output file.

    @param list The vector of Property objects.
    @param fileName The name of the file to which to write.
*/
void saveData(const vector<Property>& list, string fileName);
/**
    Writes a resource data to an output file for user to take

    @param list The vector of Property objects.
    @param outputFileName The name of the file to which to write.
    @param inputFileName The name of the file to read from.
*/
void writeResources(vector<Property>& list, string outputFileName, string inputFileName);
/**
    Prints out the program name banner

    @return void
*/
void printNameBanner();
/**
    Sorts Property List by Market Value in ascending order.

    @param sortList Vector used to store sorted properties
    @param list The vector of Property objects 
    @return void 
*/
void sortInsertion(vector<Property>& sortList, vector<Property>& list);

int main() {
    vector<Property> PropertyList;
    char option = 'y';
    string readFileName = "address.txt";
    printNameBanner();
    cout << "\nWelcome to the Rent Assistant App! Here you'll find useful\n" 
         << "tools for both tenants and landlords, alongside helpful resources!" << endl;
    cout << "\nTo start, do you have a file with properties to import? (y/n) ";
    cin >> option;
    if (option == 'y') {
        cout << "Great! Enter your file name: ";
        cin >> readFileName;
        loadProperties(PropertyList, readFileName);
    }
    else {
        cout << "No problem, two example properties have been added, and you can add your own using the operations below!" << endl;
        PropertyList.at(0) = Property();
        PropertyList.at(1) = Property("456 Example Lane", 3500, 890000);
    }
    int choice = 1;
    while (choice != 0) {
        cout << "\nPlease choose one of the following operations: ";
        cout << "\n0. Exit program\n"
             << "1. List Properties\n"
             << "2. Add a Property\n"
             << "3. Delete a Property\n"
             << "4. Change Property Market Value\n"
             << "5. Change Property Rent Price\n"
             << "6. Rent Increase Checker\n"
             << "7. Fair Rental Price Calculator\n"
             << "8. Additional Resources\n"
             << "9. Sort Property List by Market Value\n"
             << "choice (0-9): ";
        cin >> choice;
        if (choice == 1) {
            listProperties(PropertyList);
        } 
        else if (choice == 2) {
            string newProperty = addProperty(PropertyList);
            cout << "Property at " << newProperty << " has been successfully added!" << endl;
        } 
        else if (choice == 3) {
            string deletedProperty = deleteProperty(PropertyList);
            cout << "Property at " << deletedProperty << " has been successfully deleted!" << endl;
        } 
        else if (choice == 4) {
            changeValue(PropertyList);
        }
        else if (choice == 5) {
            changeRent(PropertyList);
        }
        else if (choice == 6) {
            rentIncreaseChecker(PropertyList);
        }
        else if (choice == 7) {
            rentPriceCalc(PropertyList);
        }
        else if (choice == 8) {
            cout << "\nAre you a landlord or tenant? (l/t) ";
            cin >> option;
            string inputFileName;
            if (option == 'l') {
                inputFileName = "landlordResources.txt";
            }
            else {
                inputFileName = "tenantResources.txt";
            }
            loadResources(inputFileName);
            writeResources(PropertyList, "resourceinfo.txt", inputFileName);
        }
        else if (choice == 9) {
            vector<Property> sortList;
            sortInsertion(sortList, PropertyList);
            PropertyList = sortList; 
            listProperties(PropertyList);
            cout << "Property List has been successfully sorted!" << endl;
        }
        else if (choice != 0){
            cout << "Invalid character, please try again" << endl;
        }
    }
    cout << endl;
    saveData(PropertyList, readFileName);
    cout << "Thank you for using the Rent Assistant App! Your property list and helpful resources have\n"
         << "been saved to the file resourceinfo.txt for future reference.\n"
         << "Goodbye!" << endl;
    return 0;
}
void listProperties(vector<Property>& list) {
    cout << "\nProperty list:\n";
    cout << "# " << setw(ADDRESS_WIDTH) << left << " Address";
    cout << setw(RENT_WIDTH) << left << " Rent Price ";
    cout << setw(VALUE_WIDTH) << right << "Market Value " << endl;
    for (unsigned num = 0; num < list.size(); num++) {
        cout << (num + 1) << ". ";
        list[num].print(); 
    }
}
string addProperty(vector<Property>& list) {
    cout << "\nAdding a new Property:\n";
    Property address;
    address.read();
    list.push_back(address);
    return address.getAddress();
}
string deleteProperty(vector<Property>& list) {
    cout << "\nDeleting a Property:";
    listProperties(list);
    int pos = 0;
    cout << "Enter the number of the Property: ";
    cin >> pos;
    string propDeleted = list.at(pos - 1).getAddress();
    for (unsigned int i = pos - 1; i < list.size() - 1; i++) {
        list.at(i) = list.at(i + 1);
    }
    list.pop_back();
    return propDeleted;
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
void changeRent(vector<Property>& list) {
    cout << "\nChange rent price for a Property:";
    listProperties(list);
    cout << "\nEnter the number of the Property: ";
    int pos;
    cin >> pos;
    double rent;
    cout << "Enter the new rent price: ";
    cin >> rent;
    list.at(pos - 1).setRent(rent);
}
void rentIncreaseChecker(vector<Property>& list) {
    const double CPI = .04;
    const double RENTPERCENT = .05;
    double maxPercent;
    if (CPI + RENTPERCENT <= .10) {
        maxPercent = CPI + RENTPERCENT;
    }
    else {
        maxPercent = .10;
    }
    int pos;
    double newRent;
    cout << "\nRent increase checker: ";
    listProperties(list);
    cout << "\nEnter the number of the Property: ";
    cin >> pos;
    cout << "Enter expected rent after increase: ";
    cin >> newRent;
    double maxDiff = (list.at(pos - 1).getRent()) * maxPercent; 
    double actualDiff = ((newRent - list.at(pos - 1).getRent()) / (list.at(pos - 1).getRent())) * 100;
    if (newRent - list.at(pos - 1).getRent() <= maxDiff) { 
        cout << "\nThe rent increase is allowed. Your rent was increased " << actualDiff << "%,\n"
             << "and the maximum permissible increase is only " << maxPercent * 100 << "%,\n"
             << "which is 5% plus the CPI, which for you would be $" << maxDiff + list.at(pos - 1).getRent() << "\n"
             << "(Civil Code 1947.12)." << endl;
    }
    else {
        cout << "\nThe rent increase is too high. Your rent was increased " << actualDiff << "%,\n"
             << "but the maximum permissible increase is only " << maxPercent * 100 << "%,\n"
             << "which is 5% plus the CPI, which for you would be $" << maxDiff + list.at(pos - 1).getRent() << "\n"
             << "(Civil Code 1947.12)." << endl;
        cout << "\nFor help with what to do next, go to the Additional Resources section." << endl;
    }
}
void rentPriceCalc(vector<Property> & list) {
    cout << "\nFair rental price calculator: " << endl;
    listProperties(list);
    cout << "\nEnter the number of the Property: ";
    int pos;
    cin >> pos;
    double price;
    if (list.at(pos - 1).getValue() <= 100000) {
        price = list.at(pos - 1).getValue()  * .008;
    }
    else if (list.at(pos - 1).getValue() < 350000) {
        price = list.at(pos - 1).getValue()  * .01;
    }
    else {
        price = list.at(pos - 1).getValue()  * .011;
    }
    cout << "The current rental price for " << list.at(pos - 1).getAddress() << " is listed as $"
         << setprecision(2) << fixed << list.at(pos - 1).getRent() << ", ";
    if (price - 250 <= list.at(pos - 1).getRent() && list.at(pos - 1).getRent() <= price + 250) {
        cout << "which is within range of a fair rental price." << endl;
    }
    else {
        cout << "which is not within range of a fair rental price." << endl;
    }
    cout << fixed << setprecision(2) << "Using the 1% Rule, a fair rental price for this property with a market value of $"
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
    cout << "Your properties have been successfully imported!" << endl;
}
void loadResources(string fileName) {
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
void writeResources(vector<Property>& list, string outputFileName, string inputFileName) { 
    ofstream fout(outputFileName);
    if (fout.fail()) {
        cout << "Output file " << outputFileName << " failed to open.\n";
        exit(-1);
    }
    fout << "Property list:\n";
    fout << "# " << setw(ADDRESS_WIDTH) << left << "Address";
    fout << setw(RENT_WIDTH) << left << "Rent Price";
    fout << setw(VALUE_WIDTH) << right << "Market Value " << endl;
    for (unsigned i = 0; i < list.size(); i++) {
        fout << (i + 1) << " ";
        fout << setw(ADDRESS_WIDTH) << left << list.at(i).getAddress();
        fout << setw(RENT_WIDTH) << left << setprecision(2) << fixed << list.at(i).getRent();
        fout << setw(VALUE_WIDTH) << right << setprecision(2) << fixed << list.at(i).getValue() << endl;
    }
    fout << endl;
    string line;
    ifstream fin(inputFileName);
    if (fin.fail()) {
        cout << "Input file " << inputFileName << " failed to open.\n";
        exit(-1);
    }
    while(fin.good()) {
        getline(fin, line);
        fout << line << endl;
    }
    fin.close();
}
void printNameBanner() {
    cout << " _____            _                      _     _              _   " << endl;
    cout << "|  __ \\          | |       /\\           (_)   | |            | |  " << endl;
    cout << "| |__) |___ _ __ | |_     /  \\   ___ ___ _ ___| |_ __ _ _ __ | |_ " << endl;
    cout << "|  _  // _ \\ '_ \\| __|   / /\\ \\ / __/ __| / __| __/ _` | '_ \\| __|" << endl;
    cout << "| | \\ \\  __/ | | | |_   / ____ \\__  \\__ \\ \\__ \\ || (_| | | | | |_ " << endl;
    cout << "|_|  \\_\\___|_| |_|\\__| /_/    \\_\\___/___/_|___/\\__\\__,_|_| |_|\\__|" << endl;
    cout<< "------------------------------------------------------------------" << endl;
}
void sortInsertion(vector<Property>& sortList, vector<Property>& list) {
    for (unsigned j = 0; j < list.size(); j++) {
        bool done = false;
        for (unsigned i = 0; i < sortList.size(); i++) {
            if (list.at(j).getValue() < sortList.at(i).getValue()) {
                sortList.insert(sortList.begin() + i, list.at(j));
                done = true;
                break;
            }
        }
        if (done == false) {
            sortList.push_back(list.at(j));
        }
    }
}