#include <iostream>
#include <vector>
using namespace std;

/**
   Prints all the elements in a vector to the console.

   @param v the vector to print
*/
void print(vector<int>& v);

/**
    Finds the position of an item in a vector.

    @param v The vector with the elements to search.
    @param item The value to search for.
    @return The index of the first match, or -1 if not
    found.
*/
int find(const vector<int>& v, int item);

/**
    Removes an item from the vector preserving the order
    and reducing the size of the vector by one.

    @param v The vector with the element to remove.
    @param pos The number of the element to remove.
*/
void erase(vector<int>& v, int pos);

/**
    Inserts an item into a vector.

    @param v The vector to which to add the element.
    @param pos The index before which to insert the
    element.
    @param value The element to insert.
*/
void insert(vector<int>& v, int pos, int value);

int main() {
    vector<int> list = { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };
    int choice = 1;
    cout << "Vector Algorithms\n";
    while (choice != 0) {
        cout << "\nVector data: ";
        print(list);
        cout << "\n0. Exit program\n"
             << "1. Find item\n"
             << "2. Remove item\n"
             << "3. Insert new item\n"
             << "Choice (0-4): ";
        cin >> choice;
        if (choice == 1) {
            int index = 0;
            int item = 0;
            cout << "Enter the number to find: ";
            cin >> item;
            index = find(list, item);
            cout << "Found " << item << " at position " << index << ".\n";
        } else if (choice == 2) {
            int pos = 0;
            cout << "Position to remove value: ";
            cin >> pos;
            erase(list, pos);
        } else if (choice == 3) {
            int value = 0;
            cout << "Value to insert: ";
            cin >> value;
            int pos = 0;
            cout << "Position to insert the value: ";
            cin >> pos;
            insert(list, pos, value);
        } else if (choice != 0) {
            cout << "\nInvalid choice!\n";
        }
    }
    cout << "\nGoodbye!\n";

    return 0;
}

void print(vector<int>& v) {
    for (unsigned int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int find(const vector<int>& v, int item) {
    for (unsigned int i = 0; i < v.size(); i++) {
        if (v.at(i) == item) {
            return i;
        }
    }
    return -1;
}
void erase(vector<int>& v, int pos) {
    for (unsigned int i = pos; i < v.size() - 1; i++) {
        v.at(i) = v.at(i + 1);
    }
    v.pop_back();
}
void insert(vector<int>& v, int pos, int value) {
    int last = static_cast<int>(v.size()) - 1;
    v.push_back(v.at(last));
    for (int i = last; i > pos; i--) {
        v.at(i) = v.at(i - 1);
    }
    v.at(pos) = value;
}