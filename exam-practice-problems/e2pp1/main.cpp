#include <iostream>
using namespace std;
void draw(int &n);
int main()
{
    int n;
    cin >> n;
    draw(n);
}

void draw(int &n)
{
    for(int i=n;i > 0;i--)
    {
        cout.width(i);
        cout << "*" << endl;
    }
}