#include <iostream>
#include <fstream>
using namespace std;

void get_test_files(ifstream & in_s, ofstream & out_s);
void write_header(ofstream & out_s);
void write_footer(ofstream & out_s);
void copy_text(ifstream & in_s, ofstream & out_s);

int main() {
  ifstream input;
  ofstream output;
  get_test_files(input, output);
  write_header(output);
  copy_text(input, output);
  write_footer(output);
}

void get_test_files(ifstream & in_s, ofstream & out_s)
{
  in_s.open("input.txt");
  if (in_s.fail())
  {
    cout << "Error opening input file";
    exit(1);
  }
  out_s.open("output.htm");
  if (out_s.fail())
  {
    cout << "Error opening output file";
    exit(1);
  }
}

void write_header(ofstream & out_s)
{
  out_s << "<html>\n"
        << "<title>\n"
        << "This is my C++ html converter\n"
        << "</title>\n"
        << "<body>\n";
  cout << "<html>\n"
        << "<title>\n"
        << "This is my C++ html converter\n"
        << "</title>\n"
        << "<body>\n";
}

void copy_text(ifstream & in_s, ofstream & out_s)
{
  char c;
  in_s.get(c);
  while (!in_s.eof())
    {
      if (c == '\n')
      {
        
        cout.put('<');
        cout.put('b');
        cout.put('r');
        cout.put('>');
        out_s.put('<');
        out_s.put('b');
        out_s.put('r');
        out_s.put('>');
        cout.put(c);
        out_s.put(c);
        in_s.get(c);
      }
      else
      {
        cout.put(c);
        out_s.put(c);
        in_s.get(c);
        }
    }
}

void write_footer(ofstream & out_s)
{
  out_s << "\n</title>\n"
        << "</html>\n";
  cout << "\n</title>\n"
        << "</html>\n";
}