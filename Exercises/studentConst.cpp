#include <iostream>
using namespace std;
class Student {
  public:
    Student(string name, int ID,
            string hobby);  //Constructor
    Student();
    Student(string name, int ID);
    string getName() const;
    string getHobby() const;
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
Student::Student() {
    _name = "Mark";
    _ID = 0;
    _hobby = "Chilling";
}
Student::Student(string name, int ID) {
    _name = name; 
    _ID = ID;
    _hobby = "Walking";
}
string Student::getName() const  {
  return _name;
}
string Student::getHobby() const  {
  return _hobby;
}

int main() {
    Student student1("Ennio",  98765, "C++");
    Student student2("Ryan", 40048, "Eating" );
    Student student3;
    Student student4("Jose", 1151);

    cout << "Student 1's name is " << student1.getName() << " and their hobby is " << student1.getHobby() << endl;
    cout << "Student 2's name is " << student2.getName() << " and their hobby is " << student2.getHobby() << endl;
    cout << "Student 3's name is " << student3.getName() << " and their hobby is " << student3.getHobby() << endl;
    cout << "Student 4's name is " << student4.getName() << " and their hobby is " << student4.getHobby() << endl;
    
    return 0;
}
