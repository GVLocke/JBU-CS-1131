#include <iostream>
using namespace std;

int ThisProblemIsNotImpossible(int &x);
int Relax(int &x);
int z = 15;
int main()
{
    char x = 'y';
    int y = 5;
    int z = ThisProblemIsNotImpossible(y);
    cout << x << " " << y << " " << z << endl;
    z = 8;
    y = Relax(z);
    cout << x << " " << y << " " << z << endl;
}
int ThisProblemIsNotImpossible(int &x)
{
    if (++x > 6)
        return z++;
    else
        return x++;
}
int Relax(int &x)
{
    z = (x++) + ThisProblemIsNotImpossible(z);
    return z;
}