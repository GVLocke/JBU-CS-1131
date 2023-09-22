#include <iostream>
using namespace std;
int y = 5;
int Breathe(int & x)
{
    y = x;
    if(x-- > 6)
        return ++y;
    else
        return --x;
}
int Relax (int & x)
{
    x = Breathe(y);
    return x - y;
}
int main()
{
    int x = 4;
    int y = 7;
    int z = Breathe(y);
    cout << x << " " << y << " " << z << endl;
    z = 7;
    y = Relax(z);
    cout << x << " " << y << " " << z << endl; return 0;
}