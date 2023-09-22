#include <fstream>
using namespace std;
int main()
{
    ofstream out_stream;
    out_stream.open("outfile.txt");
    out_stream << "HELLO";
    out_stream.close();
    return 0;
}