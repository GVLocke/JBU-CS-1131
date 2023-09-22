#include <iostream>
using namespace std;

enum Weapon {rock, paper, scissors};
class rockpaperscissors
{
    private:
        Weapon player1;
        Weapon computer;
    public:
        rockpaperscissors();
        rockpaperscissors(Weapon p1);
        void setPlayer1(Weapon p1);
        void setComputer();
        void printWinner();
};
rockpaperscissors::rockpaperscissors()
{
    player1 = rock;
    computer = rock;
}
rockpaperscissors::rockpaperscissors(Weapon p1)
{
    player1 = p1;
    setComputer();
}
void rockpaperscissors::setPlayer1(Weapon p1)
{
    player1 = p1;
}
void rockpaperscissors::setComputer()
{
    computer = Weapon(rand() % 3);
}
void rockpaperscissors::printWinner()
{
    if (player1 == computer)
    {
        cout << "Tie" << endl;
    }
    else if (player1 == rock && computer == scissors)
    {
        cout << "Player 1 wins" << endl;
    }
    else if (player1 == rock && computer == paper)
    {
        cout << "Computer wins" << endl;
    }
    else if (player1 == paper && computer == rock)
    {
        cout << "Player 1 wins" << endl;
    }
    else if (player1 == paper && computer == scissors)
    {
        cout << "Computer wins" << endl;
    }
    else if (player1 == scissors && computer == paper)
    {
        cout << "Player 1 wins" << endl;
    }
    else if (player1 == scissors && computer == rock)
    {
        cout << "Computer wins" << endl;
    }
}