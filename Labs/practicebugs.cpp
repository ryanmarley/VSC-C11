#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Product {
public:
    Product();
    Product(string newName, double newPrice);
    void read(ifstream& fin);
    void write(ofstream& fout);
    void print() const;
private:
    string _name;
    double _price;
};

Product::Product() {
    _name = "Unknown";
    _price = 0.0;
}

Product::Product(string newName, double newPrice) {
    _name = newName;
    _price = newPrice;
}

void Product::print() const {
    cout << _name << " @ " << _price << endl;
}

void Product::read(ifstream& fin) {
    getline(fin, _name);
    fin >> _price;
    fin >> ws;
}

void Product::write(ofstream& fout) {
    fout << _name << endl << _price;
}

// Read from filename into the vector
void readFile(vector<Product>& last, string filename);

// Display vector data
void listProducts(const vector<Product>& list);

// Write from vector into filename.
void writeFile(vector<Product>& list, string filename);

int main() {
    vector<Product> list;
    readFile(list, "products.txt");

    cout << "\nProducts in my store:\n";
    listProducts(list);

    writeFile(list, "saved.txt");
    return 0;
}

void readFile(vector<Product>& list, string filename) {
    ifstream fin(filename);
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    while(fin.good()) {
        Product temp;
        temp.read(fin);
        list.push_back(temp);
    }
    fin.close();
}

// Write from vector into filename.
void writeFile(vector<Product>& list, string filename) {
    ofstream fout(filename);
    if (fout.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < list.size(); i++) {
        list.at(i).write(fout);
    }
    fout.close();
}

void listProducts(const vector<Product>& list) {
    for (unsigned i = 0; i < list.size(); i++) {
        list.at(i).print();
    }
}