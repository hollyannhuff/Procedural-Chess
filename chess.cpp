/***********************************************************************
 * Program:
 *    Project 1, Procedural Chess
 *    Brother Helfrich, CS165
 * Author:
 *    Justin Ricks
 * Summary:
 *    Enter a brief description of your program here!  Please note that if
 *    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
 *    Before you begin working, estimate the time you think it will
 *    take you to do the assignment and include it in this header block.
 *    Before you submit the assignment include the actual time it took.
 *
 *    Estimated:  0.0 hrs
 *    Actual:     0.0 hrs
 *      Please describe briefly what was the most difficult part
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

// Colors for the board: W_ON_W means white piece-white square, etc.
#define W_ON_W "\E[31;47m"
#define B_ON_W "\E[30;47m"
#define W_ON_B "\E[37;41m"
#define B_ON_B "\E[30;41m"
#define DEFAULT "\E[0m"

using namespace std;

/**********************************************************************
 * Sets up the chess board and passes it to interact
 *********************************************************************/
void initialize();

/**********************************************************************
 * This is where all the interactions with the user will take place
 **********************************************************************/
void interact(char board[8][8]);

/***********************************************************************
 * Given the board array, draws the board to the console
 **********************************************************************/
void drawBoard(char board[8][8]);

/***********************************************************************
 * MAIN
 * INPUT: -
 * OUTPUT: Calls the initialize function
 ***********************************************************************/
int main()
{
   initialize();
   return 0;
}

/********************************************************************
 * Initialize
 * INPUT: -
 * OUTPUT: The default board set up
 *******************************************************************/
void initialize()
{
   // Set the board to the default set-up
   char board[8][8] =
   {  {  'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
      {  'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
      {  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
      {  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
      {  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
      {  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
      {  'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
      {  'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
   };

   //Draw the board
   drawBoard(board);

   return;
}

/********************************************************************
 * drawBoard
 * INPUT: Board
 * OUTPUT: Display to the screen
 *******************************************************************/
void drawBoard(char board[8][8])
{
   // Clear the terminal
   system("clear");

   // Initial spaces
   cout << "  ";

   // Header
   for (int i = 0; i < 8; i++)
      cout << ' ' << (char)(i + 97) << ' ';
   cout << endl;

   // Board
   for (int i = 0; i < 8; i++)
   {
      cout << i + 1 << ' ';

      for (int j = 0; j < 8; j++)
      {
         // Checker board Pattern
         if ((i + j) % 2 != 0)
         {
            if (isupper(board[i][j])) // Upper case means black piece
               cout << B_ON_B;  // Put black piece
            else
               cout << W_ON_B;  // Put white piece
            cout << ' ' << (char)toupper(board[i][j]) << ' ' << DEFAULT;
         }
         else // Lower case means white piece
         {
            // Same stuff as in the black piece
            if (isupper(board[i][j]))
               cout << B_ON_W;
            else
               cout << W_ON_W;
            cout << ' ' << (char)toupper(board[i][j]) << ' ' << DEFAULT;
         }
      }
      cout << endl;
   }

   return;
}
