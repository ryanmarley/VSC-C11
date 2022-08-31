/*
    CS-11 Lab 9a E.C., xcbats22.cpp
    Purpose: Extra Credit Addition of eat() Member Function

    @author Ryan Ceballos 
    @version 1.0  04/03/2022
 */
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
const int VAMPLENGTH = 3;
const int INDILENGTH = 1;
const int EGYPTLENGTH = 6;
/**
    CS-11 bats22.cpp
    Purpose: Bat class that stores the type, length, and color of a bat
    
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
        /**
        The bat randomly chooses one of the offered foods to eat and
        prints the food surrounded by # marks.
        @param food A vector of foods to eat.
        */
        void eat(vector<string>& food) const; 
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
void Bat::eat(vector<string>& food) const {
    srand(time(0));
    int randFood = rand() % food.size();
    cout << food.at(randFood) << "#. Yum!\n";
}

int main() {
    vector<string> food = {"beetles", "moths", "mosquitoes"};
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
         << bat3.getColor() << ". Well, at that point I decided that I had had enough of bats and we left the bat cave. Whew!\n";
    cout << "Later that day, I did some research and found out that the Indiana bat eats #";
    bat2.eat(food);

    return 0;
}
