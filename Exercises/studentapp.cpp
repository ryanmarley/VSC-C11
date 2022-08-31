/**
    CS-11 Quiz 4,  studentconst.cpp
    Purpose: Student class which stores information about a student

    @author Ryan Ceballos 
    @version 1.0  04/20/2022
 */
#include <iostream>
using namespace std;
#include "student.h"

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