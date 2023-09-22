#include <iostream>
using namespace std;
int main()
{  
    srand(time(0));
    for(int i(0);i < 100;i++)
    {
        int min(20000), mF(3);
        int x = (mF*rand());
        cout << (x % 20000) 
             << "." << (rand()%9) << (rand()%9) << endl;
    }
}