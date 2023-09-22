#include <iostream>
using namespace std;
int main()
{
char firstLetter(97), secondLetter;
for(int n = 1; n <= 5; n++)
    {
        secondLetter = 97;
        for(int n = 1; n <= 5; n++)
            {
                cout << firstLetter << secondLetter << endl;
                secondLetter++;
            }
        firstLetter++;
    }
}