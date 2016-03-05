// kobold_game.cpp

#include "kobold_game.hpp"

void gameStart()
{
    system("cls");

    gameStats();



}

void gameStats()
{
    std::cout   << "Day: " << day << std::endl
                << "Kobolds: " << kobolds << std::endl << std::endl << std::endl;

    cin.get();
    cin.get();
    //gameEvent();
}

using namespace std;

