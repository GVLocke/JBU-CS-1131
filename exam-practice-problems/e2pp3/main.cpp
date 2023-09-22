#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
void getFileInfo(ifstream &in_s);
int countWords(ifstream &in_s);
int main()
{
    ifstream inputFile;
    getFileInfo(inputFile);
    int count = countWords(inputFile);
    cout << count;
}

void getFileInfo(ifstream &in_s)
{
    cout << "Enter the name of the file: ";
    char fileName[15];
    cin >> fileName;
    in_s.open(fileName);
}

int countWords(ifstream &in_s)
{
    int c = 0;
    while(!in_s.eof())
    {
        char c;
        in_s.get(c);
        if (isspace(c) == true)
            c++;
    }
    return c;
}
