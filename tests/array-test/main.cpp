#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    ifstream in;
    double mean(0), temp(0), stdev;
    in.open("input.txt");
    if (in.fail()) {cout << "Problem opening file";exit(1);}
    int a[20];
    for (int i(0); i < 20;i++)
        in >> a[i];
    for (int i(0); i<20;i++)
        mean += a[i];
    mean = mean / 20;
    for (int i(0); i < 20;i++)
        temp = temp + pow((a[i] - mean), 2);
    stdev = sqrt(temp);
    cout << "Average is: " << mean << endl
         << "Standard Deviation is: " << stdev;        
}