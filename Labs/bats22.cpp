/*
    CS-11 Lab 9a, bats22.cpp
    Purpose: Develop classes and construct objects

    @author Ryan Ceballos 
    @version 1.0  04/02/2022
 */
#include <iostream>
using namespace std;
const int VAMPLENGTH = 3;
const int INDILENGTH = 1;
const int EGYPTLENGTH = 6;
/**
    CS-11 bats22.cpp
    Purpose: Bat class that stores the type, length, and color of bat
    
    @author Ryan Ceballos 
    @version 1.0  04/02/2022
 */
class Bat {
    public:
        Bat(); //Default constructor 
        Bat(string type, int length, string color); //3 parameter constructor 
        string getType() const; //Accessor 
        int getLength() const; //Accessor 
        string getColor() const;//Accessor 
    private:
        string _type;
        int _length;
        string _color;
};
Bat::Bat() {
    _type = "Vampire";
    _length = VAMPLENGTH;
    _color = "brown";
}
Bat::Bat(string type, int length, string color) {
    _type = type;
    _length = length;
    _color = color;
}
string Bat::getType() const {
    return _type;
}
int Bat::getLength() const {
    return _length;
}
string Bat::getColor() const {
    return _color;
}

int main() {
    Bat bat1;
    Bat bat2("Indiana", INDILENGTH, "gray");
    Bat bat3("Egyptian Fruit", EGYPTLENGTH, "light brown");

    cout << "***My Bat Story***" << endl;
    cout << "Once when I was hiking at the Pinnacles National Park with my family"
         << ", we decided to go to the Balconies Cave which has bats.  We climbed into the cave which was quite challenging and dark. We saw a "
         << bat1.getType() << " Bat. This " << bat1.getType() << " bat was " << bat1.getLength()
         << " inches long and " << bat1.getColor() << ". I was scared because I thought it might attack me for my blood but it had no interest in us." 
         << " Further along in the cave we saw an " << bat2.getType() << " bat which was " << bat2.getColor()
         << ". It was really small, only " << bat2.getLength() << " inch long. It was hard to see. Around another corner we spotted an "
         << bat3.getType() << " Bat which was larger than the other two bats, with a length of "
         << bat3.getLength() << " inches. It had a really huge wing span of 2 feet!  It was "
         << bat3.getColor() << ". Well, at that point I decided that I had had enough of bats and we left the bat cave.  Whew!\n";

    return 0;
}
