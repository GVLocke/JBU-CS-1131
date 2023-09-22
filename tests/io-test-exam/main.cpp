#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int num, a, b, c, d;
ifstream in;
ofstream out;
in.open("input.txt");
out.open("output.txt");
in >> num;
in >> a >> b >> c >> d;
int sum = a + b + c + d;
out << sum;
in.close();
out.close();
}