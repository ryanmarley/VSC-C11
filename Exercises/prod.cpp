#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double price = 0;

    cout << "Enter the product name: ";
    cin >> name;
    cout << "Price of the " << name << ": ";
    cin >> price;

    const int PERCENT = 100;
    double taxRate = 0;
    cout << "Enter sales tax rate (%): ";
    cin >> taxRate;
    double tax = price * taxRate / PERCENT;
    price += tax;

    cout << fixed
         << setprecision(2) << "Total price: $" << price << endl;

    int dollars = static_cast<int> (price);
    cout << "In whole dollars: $" << dollars << endl;
    return 0;
}