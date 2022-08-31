/**
    CS-11 Lab 5c, highlowsum.cpp
    Purpose: Loops and Finding Maxs, Mins, Sums, and Averages 
    
    @author Ryan Ceballos 
    @version 1.0 02/24/2022
*/
#include <iostream>
using namespace std;

int main() {
   double numMin = 0.0;
   double numMax = 0.0;
   double userNum = 0.0;
   double sum = 0.0;
   int counter = 0;
   
   cout << "Enter a positive number (0 to stop): ";
   cin >> userNum;
   numMin = userNum;
   numMax = userNum;
   if (userNum == 0) {
      cout << "No data!\n";
   }
   else {
      cout << "So far, the lowest value is " << numMin << " and the highest value is " << numMax << endl;
      counter += 1;
      sum = userNum;
   }
   
   while (userNum != 0) {
      cout << "Enter the next positive value (0 to exit): ";
      cin >> userNum;
      if (userNum <= numMin && userNum != 0) {
         numMin = userNum;
      }
      else if (userNum >= numMax) {
         numMax = userNum;
      }
      if (userNum != 0) {
         cout << "So far, the lowest value is " << numMin << " and the highest value is " << numMax << endl;
         counter += 1;
         sum = sum + userNum;
      }
   }
   if (sum != 0.0) {
      cout << "Lowest value is: " << numMin << " and highest value is " << numMax << endl;
      cout << "The sum is " << sum << " and the average is " << sum / counter << endl;
   }
         

   return 0;
}