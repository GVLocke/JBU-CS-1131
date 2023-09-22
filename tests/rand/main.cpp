#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    for(int i(1); i <= 1000; i++)
    {
        int n = rand() %2;
        if (n==0)
            {
                cout << "Hi ";
            }
            else
            {
                cout << "Hello ";
            }
    }
}