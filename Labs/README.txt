Author: Ryan Ceballos 
Asn#: Final Project
Status: Completed
Files:
- rentasstapp.cpp: application file that uses class Property
- rentasst.cpp: Property class implementation file
- rentasst.h: the Property class interface
- README.txt: This report on the Rent Assistant App
Hours Working Alone: 21
Hours Total: 21
Extra Credit:
-See below

Program Purpose:
My program is designed for renters, and landlords and its main functions revolve around rental properties.
The program has tools that are useful for both renters and landlords through features like the rent increase checker 
to see if a rent increase is allowed in regards to laws protecting tenants. Other features include calculating 
fair rental prices based on the market value of property. Lastly there is a resources option that provides resources 
for either the tenant or the landlord which is printed out on an output file for them to “take” with them.

How to Use:
1. Install the source code into a directory and compile by typing: make
2. To run at the command line, type: ./rentasstapp
3. User greeted then asked an initial question for importing data before starting if they'd like 
4. Menu is then shown, which they can choose whatever operation they like, or to exit
5. Follow the prompts that follow when running the program

Specifications Met:
##  Specification             File            Line#   Comment
--  -------------             ----            -----   -------
1.  No global variables
2.  Classes & objects         rentasst.h      19
                              rentasstapp.cpp 122
3.  a. while loop             rentasstapp.cpp 125
    b. for loop               rentasstapp.cpp 198
    c. if statement           rentasstapp.cpp 114
4.  a. void function          rentasstapp.cpp 95
    b. non-void function      rentasstapp.cpp 31
    c. pass-by-value function rentasstapp.cpp 67
    d. pass by reference func rentasstapp.cpp 59
5.  overloaded function defn  rentasst.cpp    36, 45
6.  overloaded constructors   rentasst.h      21, 22
7.  vector type               rentasstapp.cpp 106
8.  a. Read from file         rentasstapp.cpp 307     filename: address.txt, or any file with property data
    b. Write to file          rentasstapp.cpp 347     filename: resourceinfo.txt
    c. Use of fail            rentasstapp.cpp 365
    d. Stream parameter       rentasst.cpp    45      function: read(ifstream& fin)
9.  setw()                    rentasstapp.cpp 358
10. setprecision()            rentasstapp.cpp 359
11. Project report            README.txt
12. Code compiles
13. Functions correctly
14. Meets documentation requirements
Extra credit:
#6. Vector For Loop and size() rentasstapp.cpp 385    Used in sortInsertion() to sort vector elements
#7. sortInsertion()            rentasstapp.cpp 384    Sorts vector filled with objects of Property class in ascending order, Source: Ex 15.1
