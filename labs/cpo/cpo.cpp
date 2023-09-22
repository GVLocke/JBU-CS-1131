#include <iostream>
using namespace std;
int main()
{
int callsReceived, operatorsOnCall;
cin >> callsReceived >> operatorsOnCall;
if((operatorsOnCall <= 0) || (callsReceived < 0))
	cout << "INVALID";
else
	cout << callsReceived / operatorsOnCall;
}