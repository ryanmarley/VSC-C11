#include <iostream>
using namespace std;

int main() {
    cout << "Enter the temperature in degrees fahrenheit: ";
    int temp = 0;
    cin >> temp;
    cout << "Are you hungry? (y/n): ";
    char answer = 'n';
    cin >> answer;
    
    bool hungry = false; 
    if (answer == 'y') {
        hungry = true;
    }
    if (hungry && temp >= 100) {
     cout << "Eat ice cream" << endl;
    } 
    else if (hungry && temp <= 0) {  //fill in what is needed inside the ()
     cout << "Eat spicy food" << endl;
    } 
    else if (!hungry) {  //fill in what is needed inside the ()
     cout << "Do not eat anything" << endl;
    } 
    else {
     cout << "Eat your favorite food" << endl;
    }

    return 0;
}