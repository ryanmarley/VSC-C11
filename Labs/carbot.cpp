/*
    CS-11 Lab 3c, carbot.cpp
    Purpose: Asks a couple questions 

    @author Ryan Ceballos 
    @version 1.0  02/11/2022
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   string userName = " ";
   string location = " ";
   int userFavNum = 0;  
   string userFavCar = " ";
   double userFavCarCost = 0.0;
   int userDownPayment = 0;
   int loanMonths = 0;
   double interestRate = 0.0;
   double monthlyPayment = 0.0;
   
   cout << "My name is Mombot.\n";
   cout << "What is your name? ";
   cin >> userName; 
   cout << "It's nice to meet you " << userName << ".\n";
   cout << "Where are you from? ";
   cin >> location; 
   cout << location << " sounds like a nice place to be from!\n";
   cout << "What is your favorite number? ";
   cin >> userFavNum;
   cout << "Your number (" << userFavNum << ") is " << static_cast<double>(userFavNum) / 7 
        << " times as big as my favorite number, which is (7).\n";
   cout << "What is your dream car? ";
   cin >> userFavCar; 
   cout << "Wow, I've always wanted a " << userFavCar << " too.\n";
   cout << "How much does a " << userFavCar << " cost? ";
   cin >> userFavCarCost;
   cout << "Wow, " << userFavCarCost << " is expensive!\n"; 
   cout << "How much of a down payment can you afford? ";
   cin >> userDownPayment;
   
   if (userDownPayment >= userFavCarCost) {
      cout << "Awesome! It must be nice to be rich!\n"; 
      cout << "Since rich people just got a huge tax break you can buy your dream car anytime!\n";
   }
   else {
      cout << "With a down payment of $" << userDownPayment << " you will need a loan.\n";
      cout << "How many months would do you need for the loan? ";
      cin >> loanMonths;
      cout << "For a " << loanMonths << " months loan, what is the annual interest rate you can get (%)? ";
      cin >> interestRate; 
      cout << "If you bought the " << userFavCar << " with a down payment of "
           << userDownPayment << ",\n" << " you would have a monthly payment of $";
      monthlyPayment = ((interestRate / 100 / 12) * (userFavCarCost - userDownPayment)) / (1 - pow(1 + (interestRate / 100 / 12), -loanMonths));
      cout << monthlyPayment << endl;
      cout << "Over " << loanMonths << " months that is a total of $" << monthlyPayment * loanMonths 
           << " including interest!\n";
      cout << "After you graduate and get a job as a software engineer,\n maybe you will buy your dream car.\n";
   }
   
   cout << "Well, gotta go study now. Goodbye " << userName << ".\n";
   
   return 0;
}