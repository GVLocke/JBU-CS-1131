#include <iostream>
using namespace std;
int main()
{
int next = 2, product = 1;
while (next <= 5)
{ 
   product = product * next;
   next++;
//    cout << product << " * " << next << endl  (debugging output)
}
cout << product;
}