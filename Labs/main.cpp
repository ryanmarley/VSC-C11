/**
    CS-11 Lab 11c, main.cpp
    Purpose: read in from a text file and output to an output file

    @author Ryan Ceballos 
    @version 1.0  04/15/2022
 */
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
    cout << "Enter the input file name: ";
    string input;
    cin >> input;
    ifstream fin;
    ofstream fout;
    fin.open(input);
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    fout.open("outfile.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    string line;
    while(getline(fin, line)) {
        line.replace(line.find('_'), 10, "_info.txt");
        fout << line << endl;
        cout << line << endl;
    }
    fin.close();
    fout.close();
   return 0;
}