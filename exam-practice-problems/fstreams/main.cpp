#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input;
    ofstream output;
    input.open("data.txt");
    output.open("output.txt");
    string text;
    input >> text;
    output << text;
    input.close();
    output.close();
}