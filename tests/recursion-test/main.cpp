#include <iostream>
using namespace std;
int pow(int n, int m)
{
    if(m <= 1)
        return n;
    return n*pow(n, m-1);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << pow(n, m) << endl;
}

// recursion is simpler, but it's slower than an iterative solution