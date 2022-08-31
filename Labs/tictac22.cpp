/**
    CS-11 Lab 8b tictac22.cpp
    Purpose: Play tic tac toe
    Extra Credit: We implemented both extra credit options into our game! 
                  We created two new functions down below for the extra credit!

    @author Ryan Ceballos, John McDermott
    @version 1.0  3/18/2022

*/
#include <cctype>
#include <iostream>
#include <vector>


using namespace std;
const int QUIT = -1;
vector<int> logger(0);

/**
* Displays the current game board.
*
* @param board The game board.
*/
void displayBoard(const vector<char>& board); //Already implemented 

/**
* Prompts for a move and makes the move if valid.
* Otherwise, posts an error message and asks the
* user to enter a correct move. 
* 
* @param board The game board.
* @param prompt Message to display to the user.
* @param player Name of the player ('X' or  'O').
* @return The play made or -1 if the player exits the game.
*/
int move(vector<char>& board, string prompt, char player); //Implemented by John

/**
* Switches players
* @param player passed by reference
* @return void
*/
void switchPlayer(char &player); //Implemented by Ryan 

/**
* Checks to see if the game has a winner.
*
* @param board The game board.
* @return true if a winner was found, otherwise false.
*/
bool checkWinner(const vector<char>& board, char Player); //Implemented by Ryan 
/**
* Checks to see if any rows are all one player (win).
* @param board The game board.
* @param player the current player
* @return true if a winner was found, otherwise false.
*/

/** 
 * Checks to see if current player entered a correct value for their move. EXTRA CREDIT!
 * 
 * @param checkSquare The current player's entered move.
 * @return 0 if invalid value entered, or QUIT if -1 entered, or checkSquare if valid value entered for move.
 */
int checkValid(int checkSquare); //Implemented by Ryan & John

/** 
 * Checks if all spots of board have been taken.
 * 
 * @param moveCount Counts the total number of turns the players have had druing the game 
 * @param NUMSPOTS The number of spots on game board.
 * @param myBoard The current game board.
 * @return true if there's a draw, otherwise false.
 */
bool isDraw(int& moveCount, const int& NUMSPOTS, const vector<char>& myBoard); //Implemented by John

/** 
 * Checks if move entered my player hasn't already been taken. EXTRA CREDIT!
 * 
 * @param checkSquare The current player's entered move.
 * @return true is space is already taken, otherwise false.
 */
bool checkSpace(const int& checkSquare); //Implemented by Ryan

int main() {
    int moveCount = 0;
    const int NUMSPOTS = 9;
    vector<char> myBoard = {'1','2','3','4','5',
                            '6', '7','8','9'};
    int userMove = QUIT;
    char currentPlayer = 'X';
    string prompt = "enter your move using the \nnumber of the square or -1 to exit: ";
    while (true)
    {
        displayBoard(myBoard);
        userMove = move(myBoard, prompt, currentPlayer);
        if (userMove == QUIT)
        {
            cout << "Goodbye!"  << endl;
            return 0;
        }
        if (checkWinner(myBoard, currentPlayer) == true)
        {
            return 0;
        }
        switchPlayer(currentPlayer);
        if (isDraw(moveCount, NUMSPOTS, myBoard)) {
            return 0;
        }
    }
}

void displayBoard(const vector<char>& board)
{
    for (int i = 0; i < 9; i++)
    {
        cout << board.at(i) << " ";
        if (i == 2 || i == 5 || i == 8)
        {
            cout << endl;
        }
    }
}

int move(vector<char>& board, string prompt, char currPlayer)
{
    int square = QUIT;
    int result = 0; 
    cout << "Player " << currPlayer << ": ";
    cout << prompt;
    while (result == 0) {
        cin >> square;
        cout << "\nPlayer " << currPlayer << "'s move: " << square << endl;
        result = checkValid(square); 
    }
    if (square != -1) {
        board.at(square - 1) = currPlayer;
    }
    return square;
    
}

bool checkSpace(const int& checkSquare) 
{
    for (unsigned int i = 0; i < logger.size(); i++) {
            if (logger.at(i) == checkSquare) {
                cout << "Invalid move: that space is already taken\n"
                    << "Please enter your move using\n"
                    << "the number of the square or -1 to exit ";
                cin.clear();
                cin.ignore(1000, '\n');
                return true;
            }
        }
    return false;
}

int checkValid(int checkSquare)
{
    if (checkSquare == QUIT)
    {
        return QUIT;
    }
    else if (cin.fail()){
        cout << "Invalid move: enter numbers only\n"
             << "Please enter your move using\n"
             << "the number of the square or -1 to exit ";
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
    }
    else if (checkSquare < 1 || checkSquare > 9){
        cout << "Invalid move: must enter a number between 0 and 9 (inclusive)\n"
             << "Please enter your move using\n"
             << "the number of the square or -1 to exit ";
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
    }
    else if (checkSpace(checkSquare)) {
        return 0;
    }
    logger.push_back(checkSquare); 
    return checkSquare;    
}
    
void switchPlayer(char &player)
{
    if (player == 'X')
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}

bool checkWinner(const vector<char>& board, char Player)
{
    bool checkWin = false;
    //rows
    if (board.at(0) == board.at(1)  && board.at(1) == board.at(2))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }
    else if (board.at(3) == board.at(4)  && board.at(4) == board.at(5))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }
    else if (board.at(6) == board.at(7)  && board.at(7) == board.at(8))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }
    //columns
    else if (board.at(0) == board.at(3)  && board.at(3) == board.at(6))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }
    else if (board.at(1) == board.at(4)  && board.at(4) == board.at(7))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }
    else if (board.at(2) == board.at(5)  && board.at(5) == board.at(8))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }

    //diags
    else if (board.at(0) == board.at(4)  && board.at(4) == board.at(8))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }
    else if (board.at(2) == board.at(4)  && board.at(4) == board.at(6))
    {
        checkWin = true;
        displayBoard(board);
        cout << "Player " << Player << " wins!" <<endl;
    }
    return checkWin;

}

bool isDraw(int& moveCount, const int& NUMSPOTS, const vector<char>& myBoard) 
{
    moveCount += 1;
    if (moveCount == NUMSPOTS) {
            displayBoard(myBoard);
            cout << "It's a draw!" << endl;
            return true;
    }
    else {
        return false; 
    }
}