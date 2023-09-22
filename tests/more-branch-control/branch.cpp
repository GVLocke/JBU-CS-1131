#include <iostream>
using namespace std;
int main()
{
    int count, score;
    cin >> count >> score;
    if(count > 0)
        if(score > 5)
            cout << "Count > 0 and score > 5\n";
        else
            cout << "Count > 0 and score <= 5\n";
    else
        cout << "Seth's question is now answered!!";
}