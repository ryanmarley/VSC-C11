/*
    CS-11 Lab 4c, icecream.cpp
    Purpose: Encoding info for ice cream shop.

    @author Ryan Ceballos 
    @version 1.0  02/19/2022
 */
#include <iostream>
using namespace std;
const bool CH_AVAIL = true;
const bool CC_AVAIL = false;
const bool CM_AVAIL = true;
const bool HC_AVAIL = true;
const bool MC_AVAIL = false;
const bool RR_AVAIL = true;
const bool SB_AVAIL = true;
const bool VB_AVAIL = false;

int main() {
   string order = " ";
   char repeat = 'y';
   
   cout << "Welcome to the Really Cool Ice Creamery!\n";
   while (repeat == 'y') {
      cout << "Enter the ice cream order code followed by # of scoops: ";
      cin >> order;
      
      if (order.substr(0, 2) == "CH" && CH_AVAIL) {
         cout << "We have Chocolate\n";
         cout << order.substr(2) << " scoops of Chocolate\n";
         cout << "Your ice cream order will be right up!\n";
         repeat = 'n';
      }
      else if (order.substr(0, 2) == "CC" && !CC_AVAIL) {
         cout << "sorry we are sold out of that flavor today.\n";
         cout << "Would you like a different flavor? (y/n): ";
         cin >> repeat;
      }
      else if (order.substr(0, 2) == "CM" && CM_AVAIL) {
         cout << "We have Chocolate Mint\n";
         cout << order.substr(2) << " scoops of Chocolate Mint\n";
         cout << "Your ice cream order will be right up!\n";
         repeat = 'n';
      }
      else if (order.substr(0, 2) == "HC" && HC_AVAIL) {
         cout << "We have Horchata\n";
         cout << order.substr(2) << " scoops of Horchata\n";
         cout << "Your ice cream order will be right up!\n";
         repeat = 'n';
      }
      else if (order.substr(0, 2) == "MC" && !MC_AVAIL) {
         cout << "sorry we are sold out of that flavor today.\n";
         cout << "Would you like a different flavor? (y/n): ";
         cin >> repeat;
      }
      else if (order.substr(0, 2) == "RR" && RR_AVAIL) {
         cout << "We have Rocky Road\n";
         cout << order.substr(2) << " scoops of Rocky Road\n";
         cout << "Your ice cream order will be right up!\n";
         repeat = 'n';
      }
      else if (order.substr(0, 2) == "SB" && SB_AVAIL) {
         cout << "We have Strawberry\n";
         cout << order.substr(2) << " scoops of Strawberry\n";
         cout << "Your ice cream order will be right up!\n";
         repeat = 'n';
      }
      else if (order.substr(0, 2) == "VB" && !VB_AVAIL) {
         cout << "sorry we are sold out of that flavor today.\n";
         cout << "Would you like a different flavor? (y/n): ";
         cin >> repeat;
      }
      else { 
         cout << "Sorry, we don't carry that flavor\n";
         cout << "Would you like a different flavor? (y/n): ";
         cin >> repeat;
      }
   }
   
   return 0;
}