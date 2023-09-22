#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome to the Cash Regsiter Program!\n";
    double cost, total(0);
    while(true)
    {
        cout << "Please enter item cost: $";
        cin >> cost;
        if(cost != 0)
            total = cost + total;
        else
            break;
    }
    cout << "The total cost is $" << total;
    cout << "\nReady for the next customer.";
    return 0; 
}