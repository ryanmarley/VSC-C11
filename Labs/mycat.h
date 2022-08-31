#ifndef MYCAT_H
#define MYCAT_H
#include <string>
using namespace std;
/**
    CS-11 mycat.h
    Purpose: Cat class creates objects of cats with their name and age
    
    @author Ryan Ceballos 
    @version 1.0  04/15/2022
 */
class Cat {
    public:
        Cat();
        Cat(string name, int age);
        string getName() const; //accessor 
        int getAge() const; //accessor 
        void setName(string name); //mutator 
        void setAge(int age); //mutator 
        /**
            Method print - prints name, and age
            @param no parameters
            @return void
        */
        void print() const; //accessor

    private:
        string _name;
        int _age;
};
/**
    Function Description

    @param parameterName  describe the parameter
    @return describe what is returned from the function
*/
void printOldest(const vector<Cat>& cats);

#endif 