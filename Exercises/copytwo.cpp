#include <iostream>  // for cout
#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
using namespace std;

int main() {
    ifstream fin;
    ofstream fout;

    fin.open("infile.txt");
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    fout.open("outfile.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    int first;
    fin >> first;
    int second; 
    fin >> second;
    fout << "first = " << first << endl;
    fout << "second = " << second << endl;
    fin.close();
    fout.close();
    cout << "All done!\n";
    return 0;
}