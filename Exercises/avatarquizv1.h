#ifndef AVATARQUIZ_H
#define AVATARQUIZ_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstring>
#include <vector>
using namespace std;
class Avatar {

public:
    Avatar(); //default
    Avatar(string question, string optionA,
            string optionB, string optionC, string optionD,
            string optionE, string optionF, string optionG);

    string getQuestion() const;
    void setQuestion(string question);

    string getoptionA() const;
    void setoptionA(string optionA);

    string getoptionB() const;
    void setoptionB(string optionB);

    string getoptionC() const;
    void setoptionC(string optionC);

    string getoptionD() const;
    void setoptionD(string optionD);

    string getoptionE() const;
    void setoptionE(string optionE);

    string getoptionF() const;
    void setoptionF(string optionF);

    string getoptionG()const;
    void setoptionG(string optionG);

    void readQuestions(ifstream &fin);
    void writeQuestions(ofstream &fout);
    //prints questions
    void printQuestions();
private:
    string _question;//question 1 - 10
    string _optionA;//options
    string _optionB;
    string _optionC;
    string _optionD;
    string _optionE;
    string _optionF;
    string _optionG;
};
#endif
