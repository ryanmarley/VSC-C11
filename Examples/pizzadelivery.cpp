
#include <iostream> //Kelly Test code 
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the number of miles from the restaurant" << endl;
   cout << "and a 1 if you want it rushed, 0 if no rush" << endl;
   cout << "For example: 52.5  1 (for 52.5 miles and rush it)" << endl;
   double miles;
   double rushCharge;
   int rush;
   cin >> miles;
   cin >> rush;
   cout << "Delicious Pizza is almost headed your way!!" << endl;
   cout << "The basic delivery charge is     $5" << endl;
   cout << "Delivering pizza " << miles << " miles" << endl;
   double extraCharge;
   cout << "will have an extra Charge of ";
   extraCharge = ceil(miles / 10);
   cout << "\t $" << extraCharge << endl;
   cout << "and a Rush Charge of ";
   rushCharge = floor(miles/10) * rush * 2;
   cout << "\t\t $" << rushCharge << endl;
   cout << "Estimate: " << endl;
   cout << "--------" << endl;
   double subTotal;
   cout << "Subtotal ";
   subTotal = 5 + extraCharge + rushCharge;
   cout << "\t  $" << subTotal << endl;
   double discount;
   cout << "Discount (10%)";
   discount = 0.10; //this is where the problem starts 
   cout <<  "\t - $" << subTotal * discount << endl;
   double taxAmount;
   cout << "Tax (8.5%) ";
   taxAmount = 0.085 * (subTotal - (subTotal * discount)); //one possible fix 
   cout << "\t + $" << taxAmount << endl;
   cout << "\t\t -------" << endl;
   double totalOwing;
   cout << "Total Owing: ";
   totalOwing = subTotal - discount + taxAmount;
   cout << "\t $" << totalOwing << endl;

    return 0;
}