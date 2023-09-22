#include <iostream>
#include <string>
#include <vector>
using namespace std;

void stringify(const vector<string> vector, string &string)
{
  for (int i(0);i < vector.size();i++)
    string = string + vector[i] + " ";
}
bool compare_vector(const vector<string> vector, string string)
{
  if (vector.size() == 0)
    return false;
  for(int i(0);i<vector.size();i++)
    {
      if (string.find(vector[i]) == string::npos)
        return false;
    }
  return true;
}
bool same_set(const vector<string> & a, const vector<string> & b)
{
  string vector_string;
  stringify(a, vector_string);
  return compare_vector(b, vector_string);
}

int main() 
{
   vector<string> v1, v2;
   int n;

   cout << "Enter number of items in vector 1, then enter one item per line:" << endl;
   cin >> n;
   for(int i=0; i<n; i++)
   {
     string temp;
     cin >> temp;
     v1.push_back(temp);
   }
     
   cout << "Enter number of items in vector 2, then enter one item per line:" << endl;
   cin >> n;
   for(int i=0; i<n; i++)
   {
     string temp;
     cin >> temp;
     v2.push_back(temp);
   }
   if (same_set(v1, v2))
     cout << endl << "Same set!" << endl;
   else
     cout << endl << "Not the same set." << endl;
   v1.clear();
   v2.clear();
   
   return 0;
}