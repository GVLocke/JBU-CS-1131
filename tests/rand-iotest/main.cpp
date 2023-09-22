#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
    srand(time(0));
    ofstream number;
    number.open("numbers.txt"/*, ios::app*/);
    for(int i=0;i < 5000;i++)
        number << ((rand() % 31) + 1) << endl;
}