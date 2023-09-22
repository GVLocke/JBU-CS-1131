#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

const int MAX_SIZE = 200;

void readImageFile(int image[MAX_SIZE][MAX_SIZE], int &num_rows_used, int &num_cols_used, ifstream &instream)
{
  string junk;
  instream >> junk; // puts the P2 text into a junk variable
  instream >> num_cols_used;
  instream >> num_rows_used;
  instream >> junk; // puts the 255 into the junk variable
  for(int i = 0; i < num_rows_used; i++)
    {
      for (int j = 0; j < num_cols_used; j++)
        {
          instream >> image[i][j];
        }
    }
}

void avg_row(int image[MAX_SIZE][MAX_SIZE], int num_rows_used, int num_cols_used)
{
  int sum;
  double average;
  for(int h(0);h<num_rows_used;h++)
    {
      sum = 0;
      average = 0;
      for(int i(0);i<num_cols_used;i++)
        {
          sum += image[h][i];
        }
      average = static_cast<double>(sum) / static_cast<double>(num_cols_used);
      cout << "Avg Row (" << h+1 << "): " << average << endl;
    }
} 

void avg_column(int image[MAX_SIZE][MAX_SIZE], int num_rows_used, int num_cols_used) 
{
  int sum;
  double average;
  for(int h(0);h<num_cols_used;h++)
    {
      sum = 0;
      average = 0;
      for(int i(0);i<num_rows_used;i++)
        {
          sum += image[i][h];
        }
      average = static_cast<double>(sum) / static_cast<double>(num_rows_used);
      cout << "Avg Col (" << h+1 << "): " << average << endl;
    }
}

void avg_image(int image[MAX_SIZE][MAX_SIZE], int num_rows_used, int num_cols_used) 
{
  int sum(0);
  double average;
  for(int h(0);h<num_cols_used;h++)
    {
      for(int i(0);i<num_rows_used;i++)
        {
          sum += image[i][h];
          // cout << "Row (" << i << ") Column (" << h << "), Sum = " << sum << endl; 
          // Debugging stuff
        }
    }
  average = static_cast<double>(sum) / static_cast<double>(num_cols_used * num_rows_used);
  cout << "Avg Pixel: " << average;
}

void invert(int image[MAX_SIZE][MAX_SIZE], int num_rows_used, int num_cols_used, ofstream &outstream)
{
  int invertResult;
  outstream << "P2" << endl
  << num_cols_used << " " << num_rows_used << endl
  << "255" << endl;
  for(int h(0);h<num_rows_used;h++)
    {
      for(int i(0);i<num_cols_used;i++)
        {
        //   cout << "Row (" << i << ") Column (" << h << "), In = " << image[h][i] << " Out = " << abs(255 - image[h][i]) << endl; 
          invertResult = abs(255 - image[h][i]);
          outstream << invertResult << " ";
        }
    }
}

int main()
{
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(1);
    char file_name[16];
    int num_rows_used, num_cols_used;
    int image[MAX_SIZE][MAX_SIZE];
    ifstream instream;
    ofstream outstream;
    cout << "Enter input file name: ";
    cin >> file_name;
    cout << endl;
    instream.open(file_name);
    outstream.open("OutImage.txt");
    if(instream.fail())
        { 
            cout << "\nError opening " << file_name;
            exit(1);
        }
    readImageFile(image, num_rows_used, num_cols_used, instream);
    avg_row(image, num_rows_used, num_cols_used);
    avg_column(image, num_rows_used, num_cols_used);
    avg_image(image, num_rows_used, num_cols_used);
    invert(image, num_rows_used, num_cols_used, outstream);
}