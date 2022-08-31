#include <iostream>

using namespace std;

class Student {

  public:

    Student(string name, int ID,

            string hobby);  //Constructor

    string getName() const;

    void setName(string name);

    string getHobby() const;

    void setHobby(string hobby);

   

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

string Student::getName() const  {

  return _name;

}

void Student::setName(string name)  {

  _name = name;

}
string Student::getHobby() const  {

  return _hobby;

}

void Student::setHobby(string hobby)  {

  _hobby = hobby;

}

int main() {

    Student student3("Ennio",  98765, "C+++");

    student3.setName("Marco");

    cout << "Student 3's name is " << student3.getName() << endl;

    Student student4("Carlos", 71423, "Puzzles");

    Student student5("Ryan", 40048, "Basketball");

    Student student6("Christian", 11567, "Gaming");

    cout << "Student 4's name is " << student4.getName() << " and their hobby is " << student4.getHobby() << endl;

    cout << "Student 5's name is " << student5.getName() << " and their hobby is " << student5.getHobby() << endl;

    cout << "Student 6's name is " << student6.getName() << " and their hobby is " << student6.getHobby() << endl;

    student4.setName("Johnny");

    student5.setHobby("Biking");

    cout << "Student 4's name is " << student4.getName() << " and their hobby is " << student4.getHobby() << endl;

    cout << "Student 5's name is " << student5.getName() << " and their hobby is " << student5.getHobby() << endl;

    cout << "Student 6's name is " << student6.getName() << " and their hobby is " << student6.getHobby() << endl;

}