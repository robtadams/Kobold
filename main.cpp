// main.cpp

#include "kobold_menu.cpp"
#include "kobold_game.cpp"

void parseMenuInput(std::string value);

// Parses the information returned from getValue() to
// read what the player wants to do
void parseMenuInput(std::string value)
{
    // Start the game if the player enters "PLAY"
    if ( value == "PLAY" )
        gameStart();

    // Print the info if the player enters "INFO"
    else if ( value == "INFO" )
        printInfo();

    // Quit the game if the player enters "QUIT"
    else if ( value == "QUIT" )
        exit(0);
}

int main()
{
    // Print the title card
    titleScreen();

    while (true)
    {
        // Clear the screen, so any repeat call does not clutter the screen
        // with title cards and menu options
        system("cls");

        // Print the title card and the main menu options
        mainMenu();

        // Ask the user for a presented value
        // Returns the string in uppercase
        parseMenuInput(getValue());
    }
    return 0;
}

int main();
