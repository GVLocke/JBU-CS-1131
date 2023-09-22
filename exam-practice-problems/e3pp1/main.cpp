#include <iostream>
using namespace std;

// This function replaces all occurrences of the string ‘find’ found in 
	// the string ‘original’ with the string ‘replace’ and returns the number 
	// of replacements that are made.
int ReplaceAll(string & original, const string & find, const string & replace)
{
    int count = 0;
    int pos = 0;
    while ((pos = original.find(find, pos)) != string::npos)
    {
        original.replace(pos, find.length(), replace);
        pos += replace.length();
        count++;
    }
    return count;
}
int main()
{
    string original = "This is a test. This is only a test.";
    string find = "is";
    string replace = "IS";
    int count = ReplaceAll(original, find, replace);
    cout << "The string '" << original << "' contains " << count << " replacements of '" << find << "' with '" << replace << "'." << endl;
    return 0;
}