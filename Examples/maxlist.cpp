#include <iostream> //Example 4.5.1: For Loop - Finding Max in a List
using namespace std;

// Outputs max of list of integers
// First value indicates list size
// Ex: 4 -1 9 0 3  yields 9

int main() {
   int maxSoFar;
   int currValue;
   int numValues;
   int i;
   
   cin >> numValues;
   
   for (i = 0; i < numValues; ++i) {
      cin >> currValue;
      
      if (i == 0) { // First iteration
         maxSoFar = currValue;
      }
      else if (currValue > maxSoFar) {
         maxSoFar = currValue;
      }
   }
   
   if (numValues > 0) {
      cout << "Max: " << maxSoFar << endl;
   }
   
   return 0;
}