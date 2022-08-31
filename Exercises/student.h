#ifndef STUDENT_H
#define STUDENT_H
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

#endif