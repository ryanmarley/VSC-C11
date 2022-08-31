#include <iostream>
using namespace std;

int main() {
    
    cout << "NASA Mission Control readying for liftoff.\n";
    cout << "Initializing countdown from 10...\n";

    for (int countdown = 10; countdown > 0; --countdown) {
        cout << countdown << endl;
    }
    
    cout << "We have liftoff!\n";

    return 0;
}