#include "chess.h"

using namespace std;

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
