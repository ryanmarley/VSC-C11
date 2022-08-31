0001 /**
0002     CS-11 studentConst_activity.cpp //file comment block
0003     Purpose: Student class which stores information about a student
0004 
0005     @author Sharon Strelitz
0006     @version 1.0  03/30/2021
0007  */
0008 #include <iostream>
0009 using namespace std;
0010 
0011
0012 class Student {
0013   public:
0014        Student(string name, int ID,
0015             string hobby); //three parameter constructor prototype 
0016        Student(); //default constructor prototype
0017        Student(string name, string hobby);//two parameter constructor prototype
0018        string getName() const;
0019        void setName(string name);
0020        string getHobby() const;
0021        void setHobby(string hobby);
0022     /**    print method comment block:
0023       Method printStudent - prints name & hobby for the student 
0024 
0025     @param no parameters
0026     @return void
0027     */
0028     void printStudent() const;
0029   private:
0030     string _name;
0031     int _ID;
0032     string _hobby;
0033 };
0034 
0035 
0036 Student::Student(string name, int ID, string hobby)  { //3 parameter constructor implementation
0037   _name = name;
0038   _ID = ID;
0039   _hobby = hobby;
0040 }
0041 Student::Student()  { //default constructor implementation
0042   _name = "";
0043   _ID = 0;
0044   _hobby = "";
0045 }
0046 Student::Student(string name, string hobby)  { //2 parameter constructor implementation
0047   _name = name;
0048   _ID = 0;
0049   _hobby = hobby;
0050 }
0051 string Student::getName() const  {
0052   return _name;
0053 }
0054 void Student::setName(string name)  {
0055   _name = name;
0056 }
0057 string Student::getHobby() const  {
0058   return _hobby;
0059 }
0060 void Student::setHobby(string hobby)  {
0061   _hobby = hobby;
0062 }
0063 
0064 void Student::printStudent() const  { 
0065   cout << "name is " << getName() << " and hobby is " //method calling another method
0066        << getHobby() << endl; //method calling another method
0067   /* notice that when you are inside a method and you call
0068      another method, you do not need to use the object.getHobby()
0069      syntax,  simply call getName() and getHobby() as in the
0070      cout statement above */
0071 }
0072 
0073 int main() {
0074 
0075     Student student3("Ennio",  98765, "C++");//call to the 3 parameter constructor
0076     Student student4("Sharon",  12345, "Python");//call to the 3 parameter constructor
0077     Student student5("Maria",  "studying"); //call to the 2 parameter constructor
0078     Student student6;//call to the default constructor
0079     Student student7("Kentaro", "Java");//call to the 2 parameter constructor
0080 
0081     student3.setName("Tom");
0082     student4.setHobby("Java");
0083 
0084     cout << "Student 3's ";
0085     student3.printStudent();
0086     cout << "Student 4's ";
0087     student4.printStudent();
0088     cout << "Student 5's ";
0089     student5.printStudent();
0090     cout << "Student 6's ";
0091     student6.printStudent();
0092     cout << "Student 7's ";
0093     student7.printStudent();
0094 }
0095