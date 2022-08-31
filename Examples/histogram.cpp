#include <iostream> //Example 4.7.2: Nested Loop - Historgram
using namespace std;

int main() {
   int numAsterisk;  // Number of asterisks to print
   int i;            // Loop counter
   
   numAsterisk = 0;

   while (numAsterisk >= 0) {
      cout << "Enter an integer (negative to quit): ";
      cin >> numAsterisk;
      
      if (numAsterisk >= 0) {
         cout << "Depicted graphically:" << endl;
         for (i = 1; i <= numAsterisk; ++i) {
            cout << "*";
         }
         cout << endl << endl;
      }
   }
   
   cout << "Goodbye." << endl;

   return 0;
}