#include <iostream>
using namespace std;
class Student {
  public:
    Student(string name, int ID,
            string hobby);  //Constructor
  private:
    string _name;
    int _ID; 
    string _hobby;
};
Student::Student(string name, int ID, string hobby)  {
  _name = name;
  _ID = ID;
  _hobby = hobby;
}
int main() {
    Student student1("Ennio",  98765, "C++");
    Student student2("Ryan", 40048, "Eating" );
}
