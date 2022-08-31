#include <iostream>
#include <vector>
using namespace std;

void printList(const vector<int>& list);
void bubbleSort(vector<int>& list);
void swap(int& num1, int& num2);

int main() {
    cout << "Enter some integers separated by spaces (enter zero when you're done):"
         << endl;
    vector<int> mylist;
    int num;
    cin >> num;
    while (num != 0) {
        mylist.push_back(num);
        cin >> num;
    }
    cout << "Unsorted List: ";
    printList(mylist);
    bubbleSort(mylist);
    cout << "Sorted List: ";
    printList(mylist);
}

void printList(const vector<int>& list) {
    cout << "{ " ;
    for (unsigned i = 0; i <  list.size(); i++) {
        cout << list.at(i) << " ";
    }
    cout << "}" << endl;
}

void swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void bubbleSort(vector<int>& list){
    int n = static_cast<int>(list.size());
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - 1; j++) {
            if (list.at(j - 1) > list.at(j)) {
                swap(list.at(j - 1), list.at(j));
            }
        }
        printList(list);
    }
}