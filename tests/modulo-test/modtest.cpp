#include <iostream>
using namespace std;
int main()
{
    int test(14), outputOne, outputTwo;
    outputOne = test%3;
    outputTwo = test/3;
    cout << outputOne << " " << outputTwo;
    return 0;
}