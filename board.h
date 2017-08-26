//Implementation of Board class

enum Piece
{
PIECE_O = -1,
EMPTY = 0,
PIECE_X = 1
};

class Board
{
public:
//Constructor
Board(void);
/*@brief Gets the layout of the current board
 *
 *@return A Piece[] representing the current layout
 */
Piece[] GetLayout();

/*@brief Changes a tile at the given index to the given Piece
 *
 *@param player [in] - The Piece representing whose turn it is
 *@param index [in] - The position where we are placing the peice
 */
void Move(Piece player, int index);

/*@brief Returns the status of the current board
 *
 *@return 0: game is still being played
 *@return 1: X player has won the game
 *@return -1: O player has won the game
 *@return 3: the game is a tie 
 */
int Status();

private:

/*layout is a follows:
 *
 *  0 | 1 | 2
 * ---+---+---
 *  3 | 4 | 5
 * ---+---+---
 *  6 | 7 | 8
 */
Piece[] layout;

};
