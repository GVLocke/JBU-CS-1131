#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double number(123.45678);
cout.setf(ios::showpoint);
cout.setf(ios::fixed);
cout << setprecision(1) << number << endl;
cout << setw(7) << setprecision(2) << number << endl;
cout << setw(7) << number << endl;
cout << setprecision(1) << number << endl;
}