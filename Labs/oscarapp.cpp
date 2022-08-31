/**
    CS-11 Final Exam, oscarapp.cpp
    Purpose: Final 

    @author Ryan Ceballos 
    @version 1.0  05/18/2022
 */
#include "oscar.h"

/**
    Asks for the user's name and provides a personalized greeting. 

    @return The name that the person entered.
*/
string welcome();
/**
    Displays all the oscars by calling print() for each object.

    @param list The vector of Oscar objects.
*/
void listOscars(vector<Oscar>& list);
/**
    Loads the data from the specified file name, adding the items read
    to the end of the vector of objects.

    @param list The vector of objects.
    @param fileName The name of the file from which to read.
 */
void loadOscars(vector<Oscar>& list, string fileName);
/**
    Writes data to an output file.

    @param list The vector of objects.
    @param fileName The name of the file for writing.
*/
void saveOscars(vector<Oscar>& list, string fileName);
void curve( int min, int max);

int main() {
    string name = welcome();
    vector<Oscar> oscarList;
    Oscar movie;
    movie.setCategory("Best Actor");
    movie.setTitle("King Richard");
    movie.setWinningPerson("Will Smith");
    movie.setPersonExists(1);
    Oscar movie2("Best Director", "The Power of the Dog", "Jane Campion", 1);
    Oscar movie3("Best Animated Feature", "Encanto", "", 0);
    oscarList.push_back(movie);
    oscarList.push_back(movie2);
    oscarList.push_back(movie3);
    int option = 0;
    while (option != 1) {
        cout << "\nPlease choose one of the following operations:\n"
             << "1. Exit program\n"
             << "2. List Oscar Collection Contents\n"
             << "3. Load data from file\n"
             << "4. Save data to file\n"
             << "5. Call recursive function\n"
             << "Choice (1-5): ";
        cin >> option;
        switch (option) {
            case 1:
                break;
            case 2:
                listOscars(oscarList);
                break;
            case 3:
                loadOscars(oscarList, "oscardb.txt");
                break;
            case 4:
                saveOscars(oscarList, "saved.txt");
                break;
            case 5: 
                int min, max;
                cout << "\nPlease enter 2 positive integers, the 2nd larger than the first: ";
                cin >> min >> max;
                curve(min, max);
                break;
            default:
                cout << "\nInvalid choice!" << endl;
                break;
        }
    }
    cout << "Goodbye!" << endl;
    return 0;
}
string welcome() {
    string name;
    cout << "\nPlease enter your name: ";
    getline(cin, name);
    cout << "Welcome to my 2022 Oscar Winners Collection, " << name << "!" << endl;
    return name;
}
void listOscars(vector<Oscar>& list) {
    cout << "\nOscars in my collection:" << endl;
    cout << setw(24) << left << "# Oscar Category"
         << setw(35) << "Movie Title"
         << setw(15) << "Winning Person" << endl;
    for (unsigned i = 0; i < list.size(); i++) {
        cout << i + 1 << " ";
        list.at(i).print();
    }
}
void loadOscars(vector<Oscar>& list, string fileName) {
    ifstream fin(fileName);
    if (fin.fail()) {
        cout << "Input file " << fileName << " failed to open.\n";
        exit(-1);
    }
    while (fin.good()) {
        Oscar movie1;
        movie1.read(fin);
        if (fin.good()) {
            list.push_back(movie1);
        }
    }
    fin.close();
}
void saveOscars(vector<Oscar>& list, string fileName) {
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
void curve( int min, int max) {
    if (max == min - 1) {
        cout << "";
    } 
    else {
        for (int i = 1; i <= max; i++) {
            cout << '*';
        }
        cout << endl;
        curve(min, max - 1);
        for (int i = 1; i <= max; i++) {
            cout << '*';
        }
        cout << endl;
    }
}