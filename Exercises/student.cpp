#include <iostream>
using namespace std;
#include "student.h"

Student::Student(string name, int ID, string hobby)  {  
  _name = name;
  _ID = ID;
  _hobby = hobby;
}
Student::Student()  {  
  _name = "";
  _ID = 0;
  _hobby = "";
}
Student::Student(string name, string hobby)  { 
  _name = name;
  _ID = 0;
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

void Student::printStudent() const  {   
  cout << "name is " << getName() << " and hobby is " 
       << getHobby() << endl;
}