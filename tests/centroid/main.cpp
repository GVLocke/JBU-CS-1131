#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  const int NUM_VILLAGES = 52;
  double p[NUM_VILLAGES]; // population of each village
  double x[NUM_VILLAGES]; // distance of each village
  double C = 0;   // centroid
  double Pop = 0; // total population
  ifstream inPop, inDist;
  inPop.open("populations.txt");
  inDist.open("distances.txt");  
  if (inPop.fail())
  {cout <<"Problem opening file \"populations.txt\"!";exit(1);}
  if (inDist.fail())
  {cout <<"Problem opening file \"distances.txt\"!";exit(1);}

 for (int i = 0; i < NUM_VILLAGES; i++)
    {
        inPop >> p[i];
        inDist >> x[i];
        C = C + p[i]*x[i];
        Pop = Pop + p[i];
    }
  C = C / Pop;
  cout << "Optimal location = " << C << endl;
  inPop.close(); inDist.close();
}
