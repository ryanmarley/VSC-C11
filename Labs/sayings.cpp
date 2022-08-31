/*
    CS-11 Lab 7b, sayings.cpp
    Purpose: Using functions and random numbers.

    @author Ryan Ceballos 
    @version 1.0  03/10/2022
 */
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

string composeSaying() {
    vector<string> startPhrases(14);
    startPhrases.at(0) = "The sky";
    startPhrases.at(1) = "Tomorrow";
    startPhrases.at(2) = "A sweet apple";
    startPhrases.at(3) = "A sound you heard";
    startPhrases.at(4) = "Another day";
    startPhrases.at(5) = "Tranquility";
    startPhrases.at(6) = "Wondrous awe";
    startPhrases.at(7) = "Clear water";
    startPhrases.at(8) = "The flow of quizzes";
    startPhrases.at(9) = "Love";
    startPhrases.at(10) = "Significant understanding";
    startPhrases.at(11) = "A school class";
    startPhrases.at(12) = "Light";
    startPhrases.at(13) = "A dollar";
    vector<string> endPhrases(22);
    endPhrases.at(0) = "runs through everything.";
    endPhrases.at(1) = "is ever present.";
    endPhrases.at(2) = "is still not very coherent.";
    endPhrases.at(3) = "makes people shiver.";
    endPhrases.at(4) = "is always a pleasure.";
    endPhrases.at(5) = "is good for you.";
    endPhrases.at(6) = "sees the sun.";
    endPhrases.at(7) = "is often one floor above you.";
    endPhrases.at(8) = "wants to set things right.";
    endPhrases.at(9) = "asked you a question?";
    endPhrases.at(10) = "welcomes spring!";
    endPhrases.at(11) = "loves a good joke!";
    endPhrases.at(12) = "is a storyteller without equal.";
    endPhrases.at(13) = "bathes in sunlight.";
    endPhrases.at(14) = "wanted the TRUTH!";
    endPhrases.at(15) = "ever stuns the onlooker.";
    endPhrases.at(16) = "brings both pleasure and pain.";
    endPhrases.at(17) = "is not enough.";
    endPhrases.at(18) = "was always the second best.";
    endPhrases.at(19) = "always strikes for the heart.";
    endPhrases.at(20) = "keeps the doctor away.";
    endPhrases.at(21) = "is the key.";

    cout << "\nPlease enter a new starting phrase: ";
    string userStartPhrase;
    cin >> ws;
    getline(cin, userStartPhrase);
    startPhrases.push_back(userStartPhrase);
    cout << "Please enter a new ending phrase: ";
    string userEndPhrase;
    getline(cin, userEndPhrase);
    startPhrases.push_back(userEndPhrase);
    srand(time(0));
    int rand1 = rand() % startPhrases.size();
    int rand2 = rand() % endPhrases.size();
    cout << "rand1 is " << rand1 << " and rand2 is " << rand2 << endl;
    return startPhrases.at(rand1) + " " + endPhrases.at(rand2);
}

int main() {
    cout << "*** Random Wise Sayings ***\n";
    char repeat = 'y';
    while (repeat == 'y') {
        string composedStr = composeSaying();
        cout << composedStr << endl;
        cout << "Do you want to compose another saying? (y/n) ";
        cin >> repeat;
    }

    return 0;
}