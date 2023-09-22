#include <iostream>
#include <ctime>
#include "rps.h"
using namespace std;

int main()
{
    srand(time(NULL));
    cout << "Choose your weapon: 0 for Rock, 1 for Paper, 2 for Scissors";
    int choice;
    cin >> choice;
    rockpaperscissors game(static_cast<Weapon>(choice));
    game.printWinner();
}