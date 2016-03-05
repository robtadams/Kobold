#include <iostream>
#include <stdlib.h>

#ifndef KOBOLD_GAME_HPP_INCLUDED
#define KOBOLD_GAME_HPP_INCLUDED

// Game functions
/*****************************************************************/
// Start the game
void gameStart();

// Show the player their kobold count, the current day
void gameStats();

// Roll to see if a thing happens; good or bad
void gameEvent();
/*****************************************************************/

// Game variables
/*****************************************************************/
// Holds the number of adult kobolds
int kobolds;

// Holds the number of days that have passed in-game (every 10 seconds)
int day;

// Holds a randomly generated number; may be redundant
int number;
/*****************************************************************/


#endif // KOBOLD_GAME_HPP_INCLUDED
