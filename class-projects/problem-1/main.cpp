#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
double x, f;
vector<double> v;
cout << "Enter speeds in miles per hour, enter 0 to stop: \n";
do
{
  cin >> x;
  v.push_back(x);
} while (x != 0);

for(unsigned int i(0); i < (v.size()-1);i++)
{
  f = (((v[i] * 5280)/3600)/12)*2;
  cout << ceil(f) << endl;
}
  return 0;
}

// cin >> x;
// f = (((x * 5280)/3600)/12)*2;
// cout << ceil(f);
// return 0;
// }