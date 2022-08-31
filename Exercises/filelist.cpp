#include <iostream>
#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
using namespace std;

void readFile(string filename);

void read(ifstream& fin);

int main() {
    readFile("products.txt");

    return 0;
}
void readFile(string filename) {
    ifstream fin(filename);
    if (fin.fail()) {
        cout << "Input file " << filename << "failed to open.\n";
        exit(-1);
    }
    while (fin.good()) {
        read(fin);
    }
    fin.close();
}
void read(ifstream& fin) {
    string name;
    double price;
    fin >> ws; // clear whitespace including newlines
    getline(fin, name);
    fin >> price;
    if (fin.good()) { // verify not end-of-file
        cout << name << " @ " << price << endl;
    }
}