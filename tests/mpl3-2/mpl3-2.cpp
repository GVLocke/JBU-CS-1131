#include <iostream>
using namespace std;
int main()
{
int i, sum(0);
while(i >= 0)
{
	cin >> i;
	if((i%2 == 0)&&(i >= 0))
	{
		sum += i;
	}
}
cout << sum;
}