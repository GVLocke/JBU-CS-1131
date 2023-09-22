#include <iostream>
using namespace std;
int main()
{
int a[10];
int size(10), used, next, index(0);
char c;
cin.get(c);
while((c!='.')&&(index<=9))
{
    a[index++] = c;
    cin.get(c);
}
for(int i = index - 1; i >= 0;i--)
    cout << a[i];
}


// this code doesn't work.
