/**
    CS-11 Lab 7a, fnwork.cpp 
    Purpose: Practice writing functions.
    @author Ryan Ceballos 
    @version 1.0 03/10/2022
*/
#include <iostream>
using namespace std;
/**
    #1 Given two int values, return their product; unless the two values are the 
same, then return double their product.
    @param a The first value to test.
    @param b The second value to test.
    Test cases:
    multDouble(1, 2) ? 2
    multDouble(3, 2) ? 6
    multDouble(2, 2) ? 8
*/
int multDouble(int a, int b) {
    int product;
    if (a == b) {
        product = 2 * (a * b);
    }
    else { 
        product = a * b;
    }
    return product;
}
/**
    #2 Given 2 ints, a and b, return true if one of them is 15 or if their sum
    is 15.
    @param a The first value to test.
    @param b The second value to test.
    Test cases:
    makes15(9, 15) ? true
    makes15(9, 9) ? false
    makes15(6, 9) ? true
*/
bool makes15(int a, int b) {
    bool is15 = false;
    if (a == 15 || b == 15) {
        is15 = true;
    }
    if (a + b == 15) {
        is15 = true;
    }    
    return is15; 
}
/*
    #3 We have two monkeys, a and b, and the parameters aSmile and bSmile indicate
    if each is smiling. We are in trouble if they are both smiling or if
    neither of them is smiling. Return true if we are in trouble.
    @param aSmile Set true if monkey a is smiling; else set false.
    @param bSmile Set true if monkey b is smiling; else set false.
    Test cases:
    monkeyTrouble(true, true) ? true
    monkeyTrouble(false, false) ? true
    monkeyTrouble(true, false) ? false
*/
bool monkeyTrouble(bool aSmile, bool bSmile) {
    bool trouble = false;
    if ((aSmile && bSmile) || (!aSmile && !bSmile)) {
        trouble = true;
    }
    return trouble; 
}
/**
    #4 Return true if the given non-negative number is a multiple of 4 or a
    multiple of 5. Use the % "modulus" operator.
    @param num The value to test.
    Test cases:
    or45(4) ? true
    or45(10) ? true
    or45(9) ? false
*/
bool or45(int num) {
    bool test45 = false;
    if ((num % 4 == 0) || (num % 5 == 0)) {
        test45 = true;
    }
    return test45;
}
/**
    #5 Given a string, return a new string where "not " has been added to the
    front. However, if the string already begins with "not", return the string
    unchanged.
    @param str The string to test and modify.
    Test cases:
    notString("candy") ? "not candy"
    notString("x") ? "not x"
    notString("not bad") ? "not bad"
*/
string notString(string str) {
    string updatestr = str;
    if (str.find("not") != 0) {
        updatestr = "not " + str;
    }
    return updatestr;
}
/**
    #6 Return a new string where the first and last chars have been exchanged.
    @param str The string to modify.
    Test cases:
    frontBack("code") ? "eodc"
    frontBack("a") ? "a"
    frontBack("ab") ? "ba"
*/
string frontBack(string str) {
    string changeends;
    if (str.size() == 1) {
        changeends = str;
    }
    else {
        changeends = str.back() + str.substr(1, str.size() - 2) + str.at(0); 
    }
    return changeends; 
}
/**
    #7 Given 3 int values, return true if 1 or more of them are twenties.
    We'll say that a number is "twenties" if it is in the range 20..29 inclusive.
    @param num1 The first number to test for twenties.
    @param num2 The second number to test for twenties.
    @param num3 The third number to test for twenties.
    Test cases:
    hasTwenties(13, 20, 10) ? true
    hasTwenties(25, 19, 10) ? true
    hasTwenties(19, 10, 13) ? false
*/
bool hasTwenties(int num1, int num2, int num3) {
    bool test20 = false;
    if ((20 <= num1 && num1 <= 29) || (20 <= num2 && num2 <= 29) || (20 <= num3 && num3 <= 29)) {
        test20 = true;
    }
    return test20;
}
int main()
{
    const int TV3 = 3, TV4 = 4, TV9 = 9, TV10 = 10;//various constant test values
    const int TV13 = 13, TV15 = 15, TV19 = 19, TV20 = 20, TV25 = 25, TV29 = 29, TV45 = 45;
    int result;
    bool answer;
    string value;
    cout << boolalpha; //this will cause true or false to be printed for boolean variables
    cout << "*** Testing multDouble ***"<< endl;
    result = multDouble(1, 2);
    cout << "multDouble1 should be 2: " << result << endl;
    result = multDouble(TV3, 2);
    cout << "multDouble2 should be 6: " << result <<endl;
    result = multDouble(2, 2);
    cout << "multDouble3 should be 8: " << result << endl;

    cout << "\n*** Testing makes15 ***"<< endl;
    answer = makes15(TV9, TV15);
    cout << "makes15a should be true: " << answer << endl;
    answer = makes15(TV9, TV9);
    cout << "makes15b should be false: " << answer << endl;
    answer = makes15(6, TV9);
    cout << "makes15c should be true: " << answer << endl;

    cout << "\n*** Testing monkeyTrouble ***"<< endl;
    answer = monkeyTrouble(true, true);
    cout << "monkeyTrouble1 should be true: " << answer << endl;
    answer = monkeyTrouble(false, false);
    cout << "monkeyTrouble2 should be true: " << answer << endl;
    answer = monkeyTrouble(true, false);
    cout << "monkeyTrouble3 should be false: " << answer << endl;

    cout << "\n*** Testing or45 ***"<< endl;
    answer = or45(TV4);
    cout << "or45a should be true: " << answer << endl;
    answer = or45(TV10);
    cout << "or45b should be true: " << answer << endl;
    answer = or45(TV9);
    cout << "or45c should be false: " << answer << endl;

    cout << "\n*** Testing notString ***"<< endl;
    value = notString("candy");
    cout << "notString1 should be not candy: " << value << endl;
    value = notString("x");
    cout << "notString2 should be not x: " << value << endl;
    value = notString("not bad");
    cout << "notString3 should be not bad: " << value << endl;

    cout << "\n*** Testing frontBack ***"<< endl;
    value = frontBack("code");
    cout << "frontBack1 should be eodc: " << value << endl;
    value = frontBack("a");
    cout << "frontBack2 should be a: " << value << endl;
    value = frontBack("ab");
    cout << "frontBack3 should be ba: " << value << endl;

    cout << "\n*** Testing hasTeen ***"<< endl;
    answer = hasTwenties(TV13, TV20, TV10);
    cout << "hasTwenties1 should be true: " << answer << endl;
    answer = hasTwenties(TV25, TV19, TV10);
    cout << "hasTwenties2 should be true: " << answer << endl;
    answer = hasTwenties(TV20, TV10, TV29) ;
    cout << "hasTwenties3 should be true: " << answer << endl;
    answer = hasTwenties(TV15, TV10, TV45) ;
    cout << "hasTwenties4 should be false: " << answer << endl;

    cout << "\n*** End of Tests ***" << endl;
    return 0;
}