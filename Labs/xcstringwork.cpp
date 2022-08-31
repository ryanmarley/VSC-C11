/**
    CS-11 Lab 3a Extra Credit, xcstringwork.cpp
    Purpose: The extra credit portion is to give the ASCII value of the 
    first character of each word

    @author Ryan Ceballos 
    @version 1.0 02/11/2022
*/
#include <iostream>
using namespace std;

int main() {
    // Do NOT change the next few lines
    // Read words from stdin and print their values to stdout.
    cout << "*** Exrta Credit String Worksheet ***\n";
    string first, second;
    cout << "Enter two words separated by a space, and press the Enter key";
    cout << "\nFor example: Hello World!<Enter>: ";
    cin >> first >> second;
    cout << "\nYou entered: first = \"" << first << "\" and second = \""
         << second << "\"\n";
    cout << "Parenthesis below show correct results for example words.\n\n";
    // Make changes after this line where stated in comments.
    /*
    // a. Length 
    cout << "*** Measuring word length ***\n";
    int firstLength, secondLength;
    // Find length of both words and assign to firstLength and secondLength.
    firstLength = static_cast<int>(first.length()); // Measure length of first word on this line.
    secondLength = static_cast<int>(second.length()); // Measure length of second word on this line.
    cout << "First word length (5): " << firstLength << endl;
    cout << "Second word length (6): " << secondLength << endl;
    cout << "Largest word (World): ";
    if (firstLength > secondLength) {
       cout << first;
   }
   else {
      cout << second;
   }// Add if-statements to test word length and print longest
    cout << endl << endl; // Add if-statements before this line.

    // b. Concatenation 
    cout << "*** Concatenating strings ***\n";
    string msg;
    // Concatenate second followed by ", " followed by first and assign to msg.
    msg = second + ", " + first; // Assign concatenated parts on this line.
    cout << "Concatenated (World!, Hello): " << msg << endl << endl;

    // c. Extracted first and last parts using substr() 
    cout << "*** Extracting substrings ***\n";
    // Concatenate first 2 letters of first and last 3 letters of second.
    string extract = first.substr(0, 2) + second.substr(second.length() - 3); // Assign concatenated parts on this line.
    cout << "Extracted (Held!): " << extract << endl << endl;

    // d. Show concatenated middles 
    cout << "*** Extracting the middle of strings ***\n";
    // Remove the first 2 and last 1 characters of both words and join them.
    string middles = first.substr(2, first.length() - 3) + second.substr(2, second.length() -3);  // Assign concatenated parts on this line.
    cout << "Middles (llrld): " << middles << endl << endl;

    // e. Comparing string letters
    cout << "*** Comparing first letter of both words ***\n";
    cout << "Largest first letter (W): ";
    if (first.substr(0, 1) > second.substr(0, 1)) {
         cout << first.substr(0, 1);
    }
    else {
       cout << second.substr(0, 1);
    }// Add if-statements to test first letter of each word and print largest.
    cout << endl << endl; // Add if-statements before this line.
    */  
    // Extra Credit: ASCII Code of First Character of Each Word
    cout << "*** ASCII Code of First Character of Both Words ***\n";
    // Displays the ASCII Code Integer Value of The Fist Character of Each Word
    cout << "The first character of the first word is (H): \"" << first.substr(0, 1) << "\" and its ASCII value is (72): "
         << static_cast<int>(first[0]) << endl;
    cout << "The first character of the second word is (W): \"" << second.substr(0, 1) << "\" and its ASCII value is (87): "
         << static_cast<int>(second[0]) << endl << endl;
    return 0;
}