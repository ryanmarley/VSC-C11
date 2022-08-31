/**
    CS-11 Lab 4a, pressure.cpp
    Purpose: Report on the condition of tires on a car.

    @author Ryan Ceballos 
    @version 1.0 02/18/2022
*/
#include <iostream>
using namespace std;

int main() {
    // Do NOT change the next few lines
    const int PSI_FRONT = 32;
    const int PSI_REAR = 36;
    const int LIMIT = 3;
    bool goodPressure = true; // optimistic
    int rightFront, leftFront, rightRear, leftRear;
    cout << "*** Tire Logic ***";
    cout << "\nInput 36 32 35 32 for values in parentheses.\n";
    // Make changes after this line as stated in instructions and comments.

    // Prompt user and get 4 tire pressures, in order shown for Example Run
    cout << "Input left front pressure: ";
    cin >> leftFront;
    cout << "Input right front pressure: ";
    cin >> rightFront;
    cout << "Input left rear pressure: ";
    cin >> leftRear;
    cout << "Input right rear pressure: ";
    cin >> rightRear;

    cout << "\n*** Checking each tire's pressure ***\n";
    // For each tire say whether Perfect, Low, High, OK
 
    cout << "Left front " << leftFront << " (High): ";
    if (leftFront == PSI_FRONT) {
       cout << "Perfect";
    }
    else if (leftFront < PSI_FRONT - LIMIT) {
       cout << "Low";
       goodPressure = false;
    }
    else if (leftFront > PSI_FRONT + LIMIT) {
       cout << "High";
       goodPressure = false;
    }
    else {
       cout << "OK";
    }// Add if tests for left front tire; cout Perfect, Low, High, OK
    // If not OK or not Perfect, set goodPressure = false.
    
    cout << "\nRight front " << rightFront << " (Perfect): ";
    if (rightFront == PSI_FRONT) {
       cout << "Perfect";
    }
    else if (rightFront < PSI_FRONT - LIMIT) {
       cout << "Low";
       goodPressure = false;
    }
    else if (rightFront > PSI_FRONT + LIMIT) {
       cout << "High";
       goodPressure = false;
    }
    else {
       cout << "OK";
    }// Add if tests for right front tire; cout Perfect, Low, High, OK
    // If not OK or not Perfect, set goodPressure = false.

    cout << "\nLeft rear " << leftRear << " (OK): ";
    if (leftRear == PSI_REAR) {
       cout << "Perfect";
    }
    else if (leftRear < PSI_REAR - LIMIT) {
       cout << "Low";
       goodPressure = false;
    }
    else if (leftRear > PSI_REAR + LIMIT) {
       cout << "High";
       goodPressure = false;
    }
    else {
       cout << "OK";
    }// Add if tests for left rear tire; cout Perfect, Low, High, OK
    // If not OK or not Perfect, set goodPressure = false.
   
    cout << "\nRight rear " << rightRear << " (Low): ";
    if (rightRear == PSI_REAR) {
       cout << "Perfect";
    }
    else if (rightRear < PSI_REAR - LIMIT) {
       cout << "Low";
       goodPressure = false;
    }
    else if (rightRear > PSI_REAR + LIMIT) {
       cout << "High";
       goodPressure = false;
    }
    else {
       cout << "OK";
    }// Add if tests for right rear tire; cout Perfect, Low, High, OK
    // If not OK or not Perfect, set goodPressure = false.

    cout << "\n\n*** Comparing side to side pressure ***\n";
    // Compare both rear and both front

    cout << "\nFront pressure comparison (Uneven): ";
    if (leftFront - rightFront > LIMIT || rightFront - leftFront > LIMIT) {
       cout << "UNEVEN";
       goodPressure = false;
    }
    else {
       cout << "OK";
    }// Add if tests to compare left and right front; cout OK, Uneven
    // If not OK , set goodPressure = false.
    
    cout << "\nRear pressure comparison (OK): ";
    if (leftRear - rightRear > LIMIT || rightRear - leftRear > LIMIT) {
       cout << "UNEVEN";
       goodPressure = false;
    }
    else {
       cout << "OK";
    }
    // Add if tests to compare left and right rear; cout OK, Uneven
    // If not OK , set goodPressure = false.

    cout << "\n\n*** Overall Status ***\n";
    if (goodPressure) {
       cout << "Tire inflation (BAD): OK";
    }
    else {
       cout << "Tire inflation (BAD): BAD";
    }// Add if test to state overall status by testing goodPressure
    

    cout << endl;

    return 0;
}