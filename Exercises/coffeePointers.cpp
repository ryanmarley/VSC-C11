#include <iostream>
using namespace std;

void fillCup(double* cup, string* sweetener) {
    *cup = 10;
    *sweetener = "sugar";
    cout << "Coffee amount: " << *cup << " oz.\n";
    cout << "Sweetener: " << *sweetener << endl;
}

int main() {
    double myCup = 0;
    string mySweetener;
    fillCup(&myCup, &mySweetener);
    if (myCup == 0) {
        cout << "Where's my coffee?\n";
    } else {
        cout << myCup << "oz. coffee and " << mySweetener << " too!\n";
        cout << "Time to shine!\n";
    }
    return 0;
}