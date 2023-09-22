#include <iostream>
using namespace std;
int main()
{
    int countDown;
    cout << "How many greetings do you want?\n";
    cin >> countDown;

    while (countDown > 0)
    {
        cout << "Hello\n";
        countDown--;
    }

    cout << "That's all, folks!";
}