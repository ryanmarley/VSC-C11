/**
    CS-11 Quiz 4,  studentconst.cpp
    Purpose: Student class which stores information about a student

    @author Ryan Ceballos 
    @version 1.0  04/20/2022
 */
#include <iostream>
using namespace std;

class Student {
  public:
    Student(string name, int ID,
            string hobby);  
    Student();              
    Student(string name, string hobby); 
    string getName() const;        
    void setName(string name);     
    string getHobby() const;       
    void setHobby(string hobby);   
    /**
      Method printStudent - prints name & hobby for the student

    @param no parameters
    @return void
    */
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

int main() {
  
    Student student3("Ennio",  98765, "C++");  
    Student student4("Sharon",  12345, "Python"); 
    Student student5("Maria",  "studying");   
    Student student6;   
    Student student7("Kentaro", "Java");     
    
    student3.setName("Tom");
    student4.setHobby("Java");
    
    cout << "Student 3's ";
    student3.printStudent();
    cout << "Student 4's ";
    student4.printStudent();
    cout << "Student 5's ";
    student5.printStudent();
    cout << "Student 6's ";
    student6.printStudent();
    cout << "Student 7's ";
    student7.printStudent();
}

