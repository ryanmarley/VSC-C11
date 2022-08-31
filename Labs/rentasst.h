#ifndef RENTASST_H
#define RENTASST_H
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstdlib>
using namespace std;
const int ADDRESS_WIDTH = 30;
const int RENT_WIDTH = 27;
const int VALUE_WIDTH = 11;
/**
    CS-11 rentasst.h
    Purpose: Class Property creates objects of properties with address, rent price, and market value of property
    
    @author Ryan Ceballos
    @version 1.0  05/10/2022
 */
class Property {
    public:
        Property();//default constructor 
        Property(string address, double rent, double value);//three parameter constructor
        string getAddress() const; //accessor
        double getRent() const; //accessor 
        double getValue() const; //accessor 
        void setAddress(string name); //mutator
        void setRent(double rent); //mutator 
        void setValue(double value); //mutator 
        /**
            Method print - prints address, rent price, and market value of property
            @param no parameters
            @return void
        */
        void print() const; //accessor 
        /**
            Method read - gets user input for address, rent price, and market value
            @param no parameters
            @return void
        */
        void read(); //mutator
        /**
            Loads information about this Property from the file stream.
            @param fin A file input stream connected to the files with the
            data to load.
        */
        void read(ifstream& fin);
        /**
            Writes information about this Property to the file stream.
            @param fout A file output stream connected to the file in
            which to save the data.
        */
        void write(ofstream& fout) const; 

    private:
        string _address;
        double _rent;
        double _value;
};
#endif 