/*
    CS-11 Lab 4b, stellar.cpp
    Purpose: Lists starts that are within range

    @author Ryan Ceballos 
    @version 1.0  02/18/2022
 */
#include <iostream>
using namespace std;

int main() {
   double minDistMiles = 0.0;
   double maxDistMiles = 0.0;
   char repeat = 'y';
   cout << "Enter a minimum and maximum distance from the Earth and I will list the stars within those distances\n";
   while ('y' == repeat) {
      cout << "\nEnter the minimum distance in miles: ";
      cin >> minDistMiles;
      cout << "Enter the maximum distance in miles: ";
      cin >> maxDistMiles;
      cout << "The stars between " << minDistMiles << " and " << maxDistMiles << " are:\n";
      if (minDistMiles <= 9.3e7 && 9.3e7 <= maxDistMiles) {
         cout << "Sun\n";
      }
      if (minDistMiles <= 2.48e13 && 2.48e13 <= maxDistMiles) {
         cout << "Proxima Centauri\n";
      }
      if (minDistMiles <= 2.57e13 && 2.57e13 <= maxDistMiles) {
         cout << "Alpha Centauri\n";
      }
      if (minDistMiles <= 3.51e13 && 3.51e13 <= maxDistMiles) {
         cout << "Barnard's Star\n";
      }
      if (minDistMiles <= 4.53e13 && 4.53e13 <= maxDistMiles) {
         cout << "Wolf 359\n";
      }
      if (minDistMiles <= 5.06e13 && 5.06e13 <= maxDistMiles) {
         cout << "Sirius A, B\n";
      }
      if (minDistMiles <= 6.17e13 && 6.17e13 <= maxDistMiles) {
         cout << "Epsilon Eridani\n";
      }
      if (minDistMiles <= 6.35e13 && 6.35e13 <= maxDistMiles) {
         cout << "Ross 248\n";
      }
      if (minDistMiles <= 6.70e13 && 6.70e13 <= maxDistMiles) {
         cout << "Procyon\n";
      }
      if (minDistMiles <= 7.00e13 && 7.00e13 <= maxDistMiles) {
         cout << "Tau Ceti\n";
      }
      cout << "Run again? (y/n) ";
      cin >> repeat;
   }
   cout << "\nThanks for checking on our stellar neighbors!" << endl;

       return 0;
}