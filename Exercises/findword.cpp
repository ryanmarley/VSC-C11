#include <iostream>
using namespace std;

int main() {
    string word;
    int count = 0;

    while (cin >> word) {
        count += 1;
        if (word == "Shazam") {
            cout << "Shazam is word " << count << endl;
        }
        if (word == "bogus") {
            cout << "bogus is word " << count << endl;
        }
    }

    return 0;
}