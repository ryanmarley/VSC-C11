#include <fstream>
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Product {
public:
    Product();
    Product(string newName, double newPrice);
    void print() const;
    void read(ifstream& fin);
    void write(ofstream& fout);
private:
    string _name;
    double _price;
};

Product::Product() {
    _name = "none";
    _price = 0.0;
}

Product::Product(string newName, double newPrice) {
    _name = newName;
    _price = newPrice;
}

void Product::print() const {
    cout <<  _name << " @ " << _price << endl;
}

void Product::read(ifstream& fin) {
    fin >> ws;// read the whitespace before getline
    getline(fin, _name);// read the product name
    fin >> _price;// read the price
}

void Product::write(ofstream& fout) {
    fout << _name << endl;// write the product name
    fout << _price << endl;// write the price
}
// Read product data from a file.
void readFile(vector<Product>& list, string filename);

// List the products in the store.
void listProducts(const vector<Product>& store);

// Write vector of objects to the file.
void writeFile(vector<Product>& store, string fileName);

int main() {
    vector<Product> list;
    int choice;
    do { // simple menu
        cout << "\nSelect an option:\n";
        cout << "0. Exit program.\n";
        cout << "1. Load data from file.\n";
        cout << "2. Print data in vector.\n";
        cout << "3. Write data to a file.\n";
        cout << "Choice: ";
        cin >> choice;
        if (choice == 1) {
            readFile(list, "products2.txt");
        } else if (choice == 2) {
            listProducts(list);
        } else if (choice == 3) {
            writeFile(list, "saved.txt");
        } else if (choice != 0) {
            cout << "Please enter a number from 0 - 3.\n";
        }
    } while (choice != 0);
    cout << "Goodbye.\n";

    return 0;
}

void listProducts(const vector<Product>& list) {
    for (unsigned i = 0; i < list.size(); i++) {
        Product temp = list.at(i);
        temp.print();
    }
}

void readFile(vector<Product>& list, string filename) {
    ifstream fin(filename);// open an input file stream
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    while(fin.good()) {
        Product temp;
        temp.read(fin);
        if (fin.good()) {
            list.push_back(temp);
        }
    }
    fin.close();
}
void writeFile(vector<Product>& list, string filename) {
    ofstream fout(filename);// open an output file stream
    if (fout.fail()) {
        cout << "Output file " << filename << " failed to open.\n";
        exit(-1);
    }
    fout << fixed << setprecision(2); // two decimal places
    for (unsigned i = 0; i < list.size(); i++) {
        list.at(i).write(fout);
    }
    fout.close();
}