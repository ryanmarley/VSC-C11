#include <iostream>
using namespace std;

class Student {
  public:
    Student(string name, int ID,
            string hobby);  //Constructor

    Student();


    Student(string name, int ID);


    string getName() const;
    void setName(string name);
    string getHobby() const;
    void printStudent() const;

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
Student::Student(){
    _name = "Hannah";
    _ID = 123;
    _hobby = "Dancing";
}
Student::Student(string name, int ID){
    _name = name;
    _ID = ID;
    _hobby = "Dancing";
}
string Student::getName() const  {
  return _name;
}
void Student::setName(string name)  {
  _name = name;
}
string Student::getHobby()const {
    return _hobby;
}
void Student::printStudent() const {
    cout << "Student name is: " << getName() << " and their hobby is: " << getHobby() << endl;
}

int main() {
    Student student1("Ennio",  98765, "C+++");
    student1.setName("Marco");
    student1.printStudent(); 
    Student student2;
    student2.printStudent();
    Student student3("Daniel", 1234);
    student3.printStudent();
    Student student4("Jose", 1234, "Karate");
    student4.printStudent();
}