#include <iostream>
#include "func.h"
using namespace std;
void getInput(int &input1, int &input2, int &input3);
void sum(int & input1, int &input2, int &input3);

int main()
{
    int input1, input2, input3;
    getInput(input1, input2, input3);
    sum(input1, input2, input3); 
}
