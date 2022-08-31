#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Enter a number and I will show its"
         << " bar graph.\nEnter your number: ";
    cin >> num;
    cout << num << ": ";
    for (int i = 1; i <= num; i++) {
      if (i % 3 == 0) {
          cout << "+";
      }
      else {
          cout << '*'; // print one character
      }
      
    }
    cout << endl; // newline after the bar
}