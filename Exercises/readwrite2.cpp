#include <iostream>
#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
#include <vector>
#include <iomanip>   // for setprecision 
using namespace std;

void readData(vector<double>& data);
void writeData(const vector<double>& data);

int main() {
    vector<double> data;
    readData(data);
    cout << "Vector data:\n";
    for (unsigned int i = 0; i < data.size(); i++) {
        cout << data.at(i) << endl;
    }
    writeData(data);
    return 0;
}
void readData(vector<double>& data) {
    ifstream fin;
    fin.open("rawdata.txt");
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    double nextNum;
    while (fin >> nextNum) {
        cout << "Read: " << nextNum << endl;
        data.push_back(nextNum);
    }
    /*while (fin.good()) {
        fin >> nextNum;
        if (fin.good()) {
            cout << "Read: " << nextNum << endl;
        }
    }
    */
    fin.close(); 
}
void writeData(const vector<double>& data) {
    ofstream fout("neat.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    fout << fixed << setprecision(2);
    for (unsigned i = 0; i < data.size(); i++) {
        fout << setw(10) << right << data.at(i) << endl;
    }
    fout.close();
}