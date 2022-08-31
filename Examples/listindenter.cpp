#include <iostream> //Challenge 4.7.1: Nested Loop - Indents text
using namespace std;

int main() {
   int userNum;
   int i;
   int j;

   cin >> userNum;

   for (i = 0; i <= userNum; ++i) {
      cout << i << endl;
      for(j = 0; j < i + 1; ++j) {
         if (i == userNum) {
         }
         else {
            cout << " ";
         }
      }
   }
      

   return 0;
}