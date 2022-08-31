#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "avatarquiz.h"
using namespace std;
void readQuestionList (vector<Avatar>&questions, string fileName); //read from the file
void listFileQuestions(const vector<Avatar>&listFile);//list questions
void writeFile(vector<Avatar>&listFile, string fileName);//write from file
int main ()
{
    vector<Avatar>questions;
    readQuestionList(vector<Avatar>&questions, string fileName);
    writeFile(vector<Avatar>&listFile, string fileName);
    cout << "Vector file:\n";
    for (unsigned int i = 0; i < questions.size(); ++i) {
        cout << questions.at(i) << endl;
    }
    writeFile(questions);
    return 0;
}
void readQuestionList(vector<Avatar> &questions, string fileName)
{
    ifstream fin(fileName);
    if (fin.fail()) {
        cout << "File failed to load, please try again.\n";
        exit(-1);
    }
    while (fin.good()) {
        Avatar temp;
        temp.read(fin);
        fileName.read(fin);
        if (fin.good()) {
            questions.push_back(temp);
        }
        fin.close();
    }
    void listFileQuestions(const vector<Avatar>&listFile) {
        for(unsigned i = 0; i < listFile.size(); ++i) {
            Avatar tempVal = listFile.at(i);
            tempVal.print();
        }
    }
}
writeFile(vector<Avatar>&listFile, string fileName)
{
    ofstream fout(fileName);
    if(fout.fail()) {
        cout << "Input failed, please try again." << endl;
        exit (-1);
    }
    fout << fixed << setprecision();//two decimal places??
    for(unsigned int i = 0; i < listFile.size(); i++) {
        listFile.at(i).write(fout);
    }
    fout.close();

}
