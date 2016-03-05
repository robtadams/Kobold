// kobold.hpp

#include <iostream>
#include <stdlib.h>

#ifndef KOBOLD_HPP_INCLUDED
#define KOBOLD_HPP_INCLUDED


// Menu functions
/*****************************************************************/

// Outputs the KOBOLD logo
void title();

// Outputs a line of stars; is the header and footer
void hf();

// Outputs the hf, title, and then hf for the intro segment
void hfAndTitle();

// Asks the user for a value, returns the input value in all caps
std::string getValue();

// Prints the options available to the player in the main menu
// Options include: Play, to play the game
//                  Info, to learn more about the game
//                  Quit, to quit out of the game
void printMenuOptions();

// Calls hfAndTitle() to display the game's title and then calls
// printMenuOptions() to display options on main menu
void mainMenu();

// Prints the info of the game when the player types in "INFO"
// on the main menu screen
void printInfo();

/*****************************************************************/

#endif // KOBOLD_HPP_INCLUDED
