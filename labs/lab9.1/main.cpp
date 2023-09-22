#include <iostream>
#include <cstring>
using namespace std;
int Reverse(char * destination, const char * source, int num);
 
int main()
{
     const int STRINGSIZE = 20;
     char oldCString[STRINGSIZE];
     char newCString[STRINGSIZE];

     cout << "Enter the original string: ";
     cin.getline(oldCString, STRINGSIZE);
     Reverse(newCString, oldCString, STRINGSIZE);

    cout << newCString;
     return 0;
}

int Reverse(char * destination, const char * source, int num) 
{
    num = strlen(source);
    for(int i(0);i<num;i++)
      {
        *(destination+i) = *(source+((num-1)-i));
      }
    *(destination+num) = 0;
    return 0;
}
