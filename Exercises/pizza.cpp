#include <iostream> //Group: Ryan Ceballos and Martin Nabor 
#include <iomanip>
using namespace std;

double calcUnitPrice(double diameter, double price) {
    const double PI = 3.14159623;
    double radius, area;
    radius = diameter / 2; //First step is finding Radius using diameter parameter.
    area = PI * radius * radius; //Second stemp is computing area with radius and PI value. 
    return (price / area); //Final step is computing pizza per sq in using area and price and returning the value.
}

int main() {
    double diameter1;
    double diameter2;
    double price;
    double pizza1;
    double pizza2;
    cout << "Enter the diameter in inches and the price of the first pizza: ";
    cin >> diameter1 >> price;
    pizza1 = calcUnitPrice(diameter1, price);
    cout << "The cost per unit of a " << diameter1 << " inch pizza is: $" << fixed << setprecision(2) << pizza1 << endl;
    cout << "Enter the diameter in inches and the price of the second pizza: ";
    cin >> diameter2 >> price;
    pizza2 = calcUnitPrice(diameter2, price);
    cout << "The cost per unit of a " << diameter2 << " inch pizza is: $" << pizza2 << endl;

    if (pizza1 >= pizza2) {
        cout << "The best pizza to buy is the " << diameter2 
             << " inch pizza because of the better price per area at $" << pizza2 << " per sq in.\n";
    }
    else {
        cout << "The best pizza to buy is the " << diameter1
             << " inch pizza because of the better price per area at $" << pizza1 << " per sq in.\n";
    }
    return 0;
}