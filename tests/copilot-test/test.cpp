//program that asks for a string and prints it in reverse
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The string in reverse is: ";
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
    cout << endl;
    return 0;
}

//The AI wrote the above code in its entirety based soley on the comment above.