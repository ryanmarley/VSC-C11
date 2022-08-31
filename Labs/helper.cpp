/**
    helper.cpp
    Purpose: worksheet helper file for reading and writing files.
    DO NOT CHANGE ANY CODE IN THIS FILE.

    @author Ed Parrish & Sharon Strelitz
    @version 2.0  4/19/2021
*/

#include <fstream>   // for file I/O
#include <iostream>  // for cout
#include <cstdlib>   // for exit()
#include <vector>    // for vectors
using namespace std;

class Product {
    public:
        /**
            Default constructor assigns default values to member variables
        */
        Product();
        /**
            Overloaded constructor assigns parameters to member variables

            @param newName name for a product.
            @param newPrice price for a product.
        */
        Product(string newName, double newPrice);
        /**
            Read data from file for both name and price member variables.

            @param fin The input file stream to read.
        */
        void read(ifstream& fin);
        /**
            Write both name and price member variables to ofstream.

            @param fout The output file stream to write.
        */
        void write(ofstream& fout);
        /**
            Display the name and price member variables to the console like:
            Milk @ 3.95
        */
        void print() const;

    private:
        string _name;
        double _price;
};

Product::Product() {
    _price = 0;
}

Product::Product(string newName, double newPrice) {
    _name = newName;
    _price = newPrice;
}

void Product::read(ifstream& fin) {
    fin >> ws;
    getline(fin, _name);
    fin >> _price;
}

void Product::print() const {
    cout << _name << " @ " << _price << endl;
}

void Product::write(ofstream& fout) {
    fout << _name << endl << _price << endl;
}

// Write file of numbers
void writeInts(const vector<int> nums, string fileName) {
    ofstream fout(fileName.c_str());
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < nums.size(); i++) {
        fout << nums.at(i) << endl;
    }
    fout.close();
}

// Write file of strings
void writeStrs(const vector<string> strs, string fileName) {
    ofstream fout(fileName.c_str());
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < strs.size(); i++) {
        fout << strs.at(i) << endl;
    }
    fout.close();
}

// Write file of products
void writeObjs(vector<Product> prods, string fileName) {
    ofstream fout(fileName.c_str());
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < prods.size(); i++) {
        prods.at(i).write(fout);
    }
    fout.close();
}

// Write all the files for the worksheet
void setup() {
    const vector<int> dataInt = { 27, 39, 42 };
    writeInts(dataInt, "ints.txt");
    const vector<string> dataStr = { "C++", "still", "rules" };
    writeStrs(dataStr, "strs.txt");
    const vector<string> names = {
        "Sophie Engineer",
        "Emma Hacker",
        "John Q Public",
        "Joe Schmoe"
    };
    writeStrs(names, "names.txt");
    vector<Product> prods = {
        Product("Milk", 3.95),
        Product("Fresh bread", 2.99),
        Product("Cheddar cheese", 4.99)
    };
    writeObjs(prods, "products.txt");
}