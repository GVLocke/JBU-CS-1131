
#include <iostream>
using namespace std;

const int MAX_SIZE = 20;
double Average(const double a[], int size);

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double a[MAX_SIZE] = {-1}; // This will initialize the entire array to -1
    double avg;
  double i(0);
  int size(0);
    
    cout << "Enter up to 20 integers to average (-1 indicates you are finished)." << endl;
  

do
{
  cin >> i;
  a[size] = i;
  size++; 
} while ((size < 20 && i != -1) || size==20);

  
    avg = Average(a, size);
    
    cout << avg;
}

// Complete the following function, and also put the prototype above main
double Average(const double a[], int size)
{
    double average;
    for(int i(0);i<(size-1);i++)
      {
        average += a[i];
      }
    return average = average/(size-1);
}

