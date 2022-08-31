#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    Product();
    Product(string newName, double newPrice);
    void read();
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

void Product::read() {
    cout << "Enter the name of the product: ";
    cin >> ws;
    getline(cin, _name);
    cout << "Enter the price for a " << _name << ": ";
    cin >> _price;
}

void Product::print() const {
    cout <<  _name << " @ " << _price << endl;
}

// Add a new product to the store
void addProduct(vector<Product>& store);

// List the products in the store
void listProducts(vector<Product>& store);

int main() {
    const int SIZE = 3;
    vector<Product> myStore(SIZE);
    myStore.at(0) = Product("Milk", 3.95);
    myStore.at(1) = Product("Bread", 2.99);
    myStore.at(2) = Product("Cheese", 3.95);

    int choice = 1;
    while (choice != 0) {
        cout << "\n0. Exit program\n"
            << "1. Report inventory\n"
            << "2. Add a new product\n"
            << "Choice (0-2): ";
        cin >> choice;
        if (choice == 1) {
            listProducts(myStore);
        } else if (choice == 2) {
            addProduct(myStore);
        } else if (choice != 0) {
            cout << "\nInvalid choice!\n";
        }
    }
    cout << "\nGoodbye!\n";
    return 0;
}

void listProducts(vector<Product>& store) {
    cout << "\nListing products:\n";
    for (unsigned num = 0; num < store.size(); num++) {
        cout << (num + 1) << " ";
        store[num].print(); 
    }
}
void addProduct(vector<Product>& store) {
    cout << "\nAdding a new product:\n";
    Product prod;
    prod.read();
    store.push_back(prod);
}