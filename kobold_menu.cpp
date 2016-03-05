// kobold.cpp

#include "kobold_menu.hpp"

using namespace std;

// Prints the title of the game
void title()
{
    std::cout   << "\t\t     K  KK   OOO   BBBB    OOO   L      DDDD " << std::endl
                << "\t\t     K K    O   O  B   B  O   O  L      D   D" << std::endl
                << "\t\t     KK     O   O  BBBB   O   O  L      D   D" << std::endl
                << "\t\t     K K    O   O  B   B  O   O  L      D   D" << std::endl
                << "\t\t     K  KK   OOO   BBBB    OOO   LLLLL  DDDD " << std::endl << std::endl;
}

// Prints a full line of stars; used as the header and the footer of the screen
void hf()
{
        std::cout << "********************************************************************************" << std::endl;
}

// Combination of the header, the title, and the footer to make a pleasant and easy title card
void hfAndTitle()
{
    hf();
    title();
    hf();
}

// The title screen; should only appear once, when the game is first loaded
void titleScreen()
{
    hfAndTitle();
    std::cout << std::endl << "\t\t\t    PRESS ENTER TO CONTINUE" << std::endl;
    cin.get();
    system("cls");
}

// Asks the user for a value, sets every character to uppercase, and then returns that value
string getValue()
{
    std::string value;
    std::string new_value;

    std::cin >> value;

    for (int i = 0; i < value.length(); i++)
        new_value += toupper(value[i]);

    return new_value;
}

// Outputs the main menu options, asks the user for input, and checks what they entered
void printMenuOptions()
{
    std::cout   << "\t\t\t\t    Play" << std::endl
                << "\t\t\t\t    Info" << std::endl
                << "\t\t\t\t    Quit" << std::endl;
}

void printInfo()
{
    system("cls");

    hfAndTitle();

    std::cout   << "     Kobold is a game where you play as the leader of a kobold tribe."
                << "\n     You are tasked with building a strong and powerful tribe, and surviving"
                << "\n     the onslaught of attackers, bandits, thieves, and other terrible things"
                << "\n     from destroying your tribe. Are you a strong enough to lead your people?"  << std::endl << std::endl;

    std::cout   << "\n\n\t\t\t     PRESS ENTER TO CONTINUE" << std::endl;

    cin.get();
    cin.get();

    system("cls");
    mainMenu();
}

// Prints the main menu title card and options
void mainMenu()
{
    hfAndTitle();

    printMenuOptions();
}
