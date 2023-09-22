#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
// cout << "The name used to start the program:"
//     << argv[0]
//     << "\nArguments are:\n";
    int x = atoi(argv[1]);
for (int n(0); n < x; n++)
    // cout << n << ": " << argv[n] << endl;
    cout << "Hello World" << endl;
}