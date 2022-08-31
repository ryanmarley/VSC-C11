#include <iostream>
using namespace std;

void recursiveCounter(int counter);

int main() {
    int counter;
    cout << "Enter a number to count down from: ";
    cin >>  counter;
    recursiveCounter(counter);

    return 0;
}

void recursiveCounter(int counter) {
    if(counter == 0)  {  //base case
        cout << "0" << endl;
        return;
    }  else {    //recursive case
        cout << counter << endl;
        counter--;
         cout << "Before the recursive call counter is " << counter << endl;
        recursiveCounter(counter);
        cout << "After the recursive call counter is " << counter << endl;
    }
}
