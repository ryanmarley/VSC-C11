#include <iostream>
using namespace std;

int main() {
    double score = 0.0;
    string grade = "";
    cout << "Enter a score: ";
    cin >> score;
    
    if (score >= 90) {   
        grade = "A";
    }  
    else if (score >= 80) {
            grade = "B";
    }
    else if (score >= 70) {
            grade = "C";
    }
    else if (score >= 60) {
            grade = "D";
    }
    else {
            grade = "F";
    }

    cout << grade << endl;
    return 0;
}