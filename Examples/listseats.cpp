#include <iostream> //Challenge 4.7.2: Nested Loop - Prints seats list of columns and rows
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;

   for (currentRow = 1; currentRow <= numRows; ++currentRow) {
      for (currentColumnLetter = 'A', currentColumn = 0; currentColumn < numColumns; ++currentColumnLetter) {
         cout << currentRow << currentColumnLetter << " ";
         currentColumn += 1;
      }
   }

   cout << endl;

   return 0;
}