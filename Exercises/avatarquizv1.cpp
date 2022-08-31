#include <iostream> //hi
#include <string>
#include "avatarquiz.h"
using namespace std;
Avatar::Avatar(string question, string optionA, string optionB,//class with 7 params
               string optionC, string optionD, string optionE,
               string optionF, string optionG) {

               }
Avatar::Avatar() //default
{
    _question = " ";
    _optionA = " ";
    _optionB = " ";
    _optionC = " ";
    _optionD = " ";
    _optionE = " ";
    _optionG = " ";
}
string Avatar::getQuestion() const
{
    return _question;
}
void Avatar::setQuestion(string question)
{
    _question = question;
}

string Avatar::getoptionA() const
{
    return _optionA;
}
void Avatar::setoptionA(string optionA)
{
    _optionA = optionA;
}
string Avatar::getoptionB() const
{
    return _optionB;
}
void Avatar::setoptionB(string optionB)
{
    _optionB = optionB;
}
string Avatar::getoptionC() const
{
    return _optionC;
}
void Avatar::setoptionC(string optionC)
{
    _optionC = optionC;
}
string Avatar::getoptionD() const
{
    return _optionD;
}
void Avatar::setoptionD(string optionD)
{
    _optionD = optionD;
}
string Avatar::getoptionE() const
{
    return _optionE;
}
void Avatar::setoptionE(string optionE)
{
    _optionE = optionE;
}
string Avatar::getoptionF() const
{
    return _optionF;
}
void Avatar::setoptionF(string optionF)
{
    _optionF = optionF;
}
string Avatar::getoptionG()const
{
    return _optionG; //SEMI
}
void Avatar::setoptionG(string optionG)
{
    _optionG = optionG;
}
void Avatar::readQuestions(ifstream& fin)
{
    fin >> ws;
    getline(fin, _question);
    getline(fin, _optionA);
    getline(fin, _optionB);
    getline(fin, _optionC);
    getline(fin, _optionD);
    getline(fin, _optionE);
    getline(fin, _optionF);
    getline(fin, _optionG);
}

void Avatar::writeQuestions(ofstream& fout)
{
    fout << _question << endl;
    fout << _optionA << endl;
    fout << _optionB << endl;
    fout << _optionD << endl;
    fout << _optionE << endl;
    fout << _optionF << endl;
    fout << _optionG << endl;
}

void Avatar::printQuestions()
{
    cout << _question;
    cout << _optionA;
    cout << _optionB;
    cout << _optionC;
    cout << _optionD;
    cout << _optionE;
    cout << _optionF;
    cout << _optionG;
}

