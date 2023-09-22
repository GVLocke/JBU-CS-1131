#include <iostream>
#include "unitprice.h"
using namespace std;
// Returns the price per square inch of a pizza.
// The formal parameter named diameter is the diameter of the pizza in inches.
// The formal parameter named price is the price of the pizza.
double unitprice(int diameter, double price);

int main()
{
    int diameter;
    double price;
    cin >> diameter >> price;
    double ppi = unitprice(diameter, price);
    cout << ppi;

}