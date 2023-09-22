#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void instructions();
void get_test_files(ifstream & in_s, ofstream & out_s);
void copy_text(ifstream & in_s, ofstream & out_s);

int main() 
{
  ofstream outstream;
  ifstream in_stream;
  instructions();
  get_test_files(in_stream, outstream);
  copy_text(in_stream, outstream);
}

void instructions()
  {
    cout << "This program copies text from an input file." <<endl;
  }


void get_test_files(ifstream & in_s, ofstream & out_s)
{
  char output_file[15], input_file[15];
  cout << "Enter input file name to copy:";
  cin >> input_file;
  cout << "\nEnter output file name:";
  cin >> output_file;
  cout << endl;
  in_s.open(input_file);
  if (in_s.fail())
    {
       cout << "Input file opening failed. \n";
       exit(1);  // if we couldn't open the file to read from we exit
      }
  out_s.open(output_file);
  if (out_s.fail())
    {
       cout << "Output file opening failed. \n";
       exit(1);  // if we couldn't open the file to read from we exit
      }
}

void copy_text(ifstream & in_s, ofstream & out_s)
{
  
  char c;
  while (!in_s.eof())
    {
      in_s.get(c);
      cout.put(c);
      out_s.put(c);
    }
}