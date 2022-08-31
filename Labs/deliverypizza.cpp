/*
    CS-11 Lab 2b,   deliverpizza.cpp
    Purpose: Practice use of functions.

    @author Ryan Ceballos 
    @version 1.0  02/03/2022
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int rush;
   double miles;
   int mileCharge;
   int rushCharge = 0;
   int subTotal;
   double discount;
   double tax;
   double totalPrice;

   cout << "Enter the number of miles from the restaurant and" << endl; 
   cout << " a 1 if you want it rushed, 0 if no rush" << endl;
   cout << "For example: 52.5 1 (for 52.5 miles and rush it)" << endl;
   cin >> miles >> rush;

   mileCharge = static_cast<int>(ceil(miles / 10.0));

   cout << "Delicious Pizza is almost headed your way!!" << endl; 
   cout << "The basic delivery charge is" << "\t$5" << endl;
   cout << "Delivering pizza " << miles << " miles" << endl; 
   cout << " will have an extra charge of" << "\t$" << mileCharge << endl; 
   
   rushCharge = static_cast<int>(miles / 10) * 2 * rush;
   cout << "and a Rush Charge of" << "\t\t$" << rushCharge << endl;
   
   cout << "Estimate:" << endl;
   cout << "--------" << endl; 
    
   subTotal = 5 + mileCharge + rushCharge;
   cout << "Subtotal" << "\t $" << subTotal << endl;

   discount = subTotal * .1;
   cout << "Discount (10%)" << "\t- $" << discount << endl;

   tax = (subTotal - discount) * 0.085;
   cout << "Tax (8.5%)" << "\t+ $" << tax << endl;
   cout << "\t\t-------" << endl;

   totalPrice = subTotal - discount + tax;
   cout << "Total Owing:" << "\t$" << totalPrice << endl;
   
   return 0;
}