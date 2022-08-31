#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> names(3);
    names.at(0) = "Ryan Ceballos";
    names.at(1) = "Augie Ceballos";
    names.at(2) = "Valeria Ceballos";
    names.push_back("Lytrell Francis");
    names.push_back("Truman Natividad");
    cout << "Enter a list of names\n"
     << "When finished enter the word: done\n";
    string input;
    do {
        getline(cin, input);
        if (input != "done") {
        names.push_back(input);
    }
    } while (input != "done");
    cout << "\nThe first name on the list is: " << names.at(0) << endl;
    cout << "The last name on the list is: " << names.at(names.size() - 1) << endl << endl;

    for (int i = 0; i < static_cast<int> (names.size()); i++) {
        cout << names.at(i) << endl;
    }
    cout << endl;
    return 0;
}