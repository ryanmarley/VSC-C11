#include <iostream>
#include <climits>   //needed to use the INT_MAX constant
using namespace std;

int main() {
    double sumScores = 0.0;
    double nextScore = 0.0;
    int count = 0;

    /*while (nextScore >= 0.0) {
        count++;
        cout << "Enter score #" << count << " (-1 to exit): ";
        cin >> nextScore;
        
        if (nextScore >= 0) {
                sumScores += nextScore;
        }
    }
    */
    do {
        count++;
        cout << "Enter score #" << count << " (-1 to exit): ";
        cin >> nextScore;
        if (cin.fail()) {

            cout << "Error: please enter a number \n";
            cin.clear();
            cin.ignore(INT_MAX, '\n');  //clear buffer
            count--;
        }  
        else if (nextScore >= 0) {
            sumScores +=  nextScore;
        }         
    } while (nextScore >= 0);

    cout << "sumScores is " << sumScores;
    return 0;
}