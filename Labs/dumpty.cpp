/**
    CS-11 Lab 5a, dumpty.cpp
    Purpose: loops and if-elseif 
    
    @author Ryan Ceballos 
    @version 1.0 02/24/2022
*/
#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i = 0;
   
   cout << "Enter a positive number for the ending loop count: ";
   cin >> userNum;
   
   for (i = 1; i <= userNum; ++i) {
      if (i % 15 == 0) {
         cout << "Had a great fall";
      }
      else if (i % 4 == 0) {
         cout << "Humpty";
      }
      else if (i % 5 == 0) {
         cout << "Dumpty";
      }
      else {
         cout << i;
      }
      cout << endl;
   }
   

   return 0;
}