/*
    CS-11 Tester, test.cpp
    Purpose: Toolbox Tester Program

    @author Ryan Ceballos 
    @version 1.0  02/10/2022
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> vectB = {"cats", "dogs"};
    cout << vectB.at(0);


/*    string str;
    cin >> str;
    string changeends = str.back() + str.substr(1, str.size() - 2) + str.at(0);
    cout << changeends << endl;

*/   
    /*
    
    string word1 = "Hello!";

    char letter1 = word1.at(0);
    cout << static_cast<int>(letter1) << endl;

    char x = word1.at(1);
    x = toupper(x);
    word1.at(1) = x;
    cout << word1 << endl;
*/

/*  string firstName = " ", lastName = " ", fullName = " "; 

    cout << "First name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName; 

    fullName = firstName + " " + lastName; 
    cout << "Welcome \"" << fullName << "\"!\n"; 

    cout << "Your initials: " << firstName.substr(0, 1) << lastName.substr(0, 1) << endl;
*/
    return 0;
}