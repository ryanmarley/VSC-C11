/**
    CS-11 Practice Final, curioapp.cpp
    Purpose: Practive for the final exam

    @author Ryan Ceballos 
    @version 1.0  05/17/2022
 */
#include "curio.h"

/**
    Asks for the user's login name and password. Tests the entered name and
    password against the parameter values. If the login and password are
    not correct, prints an error message and asks the user to try again.
    When the correct login and password are entered, asks the user for their
    full name and provides a personalized greeting.

    @param user The user name to test against.
    @param password The password to test against.
    @return The name that the person entered.
*/
string login(string user, string password);
/**
    Displays all the Curios by calling print() for each Curio object.

    @param list The vector of Curio objects.
*/
void listData(vector<Curio>& list);
/**
    Loads the curio data from the specified file name into the vector
    of Curio objects.

    @param list The vector of Curio objects.
    @param fileName The name of the file from which to read.
*/
void loadData(vector<Curio>& list, string fileName);
/**
    Writes store data to an output file.

    @param list The vector of Curio objects.
    @param fileName The name of the file to which to write.
*/
void saveData(vector<Curio>& list, string fileName);
/**
    Writes a report to a file named report.txt.

    @param list The vector of Curio objects.
    @param username The users name.
*/
void writeReport(vector<Curio>& list, string username);
/**
    Displays the string backwards.

    @param str The string to display in reverse.
    @param index An index needed for counting the recursion.
*/
void showBackwards(string str, int index);

int main() {
    vector<Curio> curioList(2);
    string name = login("Ryan", "abc123");
    cout << "Welcome to my virtual store, " << name << "!" << endl;
    curioList.at(0) = Curio("Diamond Sword", 10.25, 5);
    curioList.at(1) = Curio("Crystal Dragon", 9.95, 3);
    Curio item;
    item.setName("Glass Eye");
    item.setPrice(4.75);
    item.setQuantity(7);
    curioList.push_back(item);

    int option = 1;
    while (option != 0) {
        cout << "\nPlease choose one of the following operations:\n"
             << "0. Exit program\n"
             << "1. Report inventory\n"
             << "2. Load more data\n"
             << "3. Save data to file\n"
             << "4. Write report to file\n"
             << "5. Call recursive function\n"
             << "Choice (0-4): ";
        cin >> option;
        if (option == 1) {
            listData(curioList);
        }
        else if (option == 2) {
            loadData(curioList, "curio.txt");
        }
        else if (option == 3) {
            saveData(curioList, "saved.txt");
        }
        else if (option == 4) {
            writeReport(curioList, name);
        }
        else if (option == 5) {
            cout << "Your name backwards is: ";
            showBackwards(name, 0);
            cout << endl;
        }
        else if (option != 0) {
            cout << "\nInvalid choice!\n";
        }
    }
    cout << "\nGoodbye!" << endl;

    return 0;
}

string login(string user, string password) {
    string userName;
    string passWrd;
    string name;
    char repeat = 'y';
    do {
        cout << "Username: ";
        cin >> userName;
        cout << "Password: ";
        cin >> passWrd;
        if (userName == user && passWrd == password) {
            cout << "Please enter your full name: ";
            cin >> ws;
            getline(cin, name);
            repeat = 'n';
        }
        else {
            cout << "Invalid login!" << endl;
        }
    } while(repeat == 'y');
    return name; //Next time put the statement here and return name just to save
}
void listData(vector<Curio>& list) {
    cout << "Curios in my store:" << endl;
    cout << "# " << setw(20) << left << "Name";
    cout << setw(10) << right << "Price";
    cout << setw(6) << right << "Qty";
    cout << setw(10) << right << " Value" << endl;
    for (unsigned i = 0; i < list.size(); i++) {
        cout << i + 1 << " ";
        list.at(i).print();
    }
}
void loadData(vector<Curio>& list, string fileName) {
    ifstream fin(fileName);
    if (fin.fail()) {
        cout << "Input file " << fileName << " failed to open.\n";
        exit(-1);
    }
    while (fin.good()) {
        Curio curioItem;
        curioItem.read(fin);
        if (fin.good()) {
            list.push_back(curioItem);
        }
    }
    fin.close();
}
void saveData(vector<Curio>& list, string fileName) {
    ofstream fout(fileName);
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < list.size(); i++) {
        fout << list.at(i).getName() << endl;
        fout << list.at(i).getPrice() << endl;
        fout << list.at(i).getQuantity() << endl;
    }
    fout.close();
}
void writeReport(vector<Curio>& list, string username) {
    ofstream fout("report.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    fout << "Report for " << username << ": " << endl;
    fout << "# " << setw(20) << left << "Name";
    fout << setw(10) << right << "Price";
    fout << setw(6) << right << "Qty";
    fout << setw(10) << right << " Value" << endl;
    for (unsigned i = 0; i < list.size(); i++) {
        fout << i + 1 << " ";
        fout << setw(20) << left << list.at(i).getName();
        fout << setw(10) << right << list.at(i).getPrice();
        fout << setw(6) << right << list.at(i).getQuantity();
        fout << setw(10) << right << setprecision(2) << fixed << list.at(i).getValue() << endl;
    }
}
void showBackwards(string str, int index) {
    if (index == static_cast<int>(str.length() - 1)) {
        cout << str.at(0);
    } else {
        cout << str.at(str.length() - (1 + index));
        ++index;
        showBackwards(str, index);
    }
}