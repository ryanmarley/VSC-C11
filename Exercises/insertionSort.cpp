#include <iostream>           //     Insertion Sort Starter Code  Ex. 15.1
#include <vector>
using namespace std;

void insertionSort(vector<int>& data, int newValue);

int main() {
    vector<int> newValues = {22, 99, 2, 55, 1, 100};
    vector<int> sortedList;
    for (unsigned i = 0; i < newValues.size(); i++)  {
        insertionSort(sortedList, newValues.at(i));
    }
    cout << "Sorted list: " << endl;
    for (int i = 0; i < (int) sortedList.size(); i++) {
        cout << sortedList.at(i) << " ";
    }
    cout << endl;
    return 0;
}

void insertionSort(vector<int>& data, int newValue) {
    bool done = false;
    for (unsigned i = 0; i < data.size(); i++) {
        if (newValue < data.at(i)) {
            data.insert(data.begin() + i, newValue);
            done = true;
            break;
        }
    }
    if (done == false) {
        data.push_back(newValue);
    }
}