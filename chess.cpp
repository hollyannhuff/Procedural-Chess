#include "chess.h"

using namespace std;

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
