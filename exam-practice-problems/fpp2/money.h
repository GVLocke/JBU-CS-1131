#include <iostream>
using namespace std;

class Money
{
    private:
        int dollars;
        int cents;
    public:
        Money();
        Money(int dollars, int cents);
        float getTotal();
};

Money::Money()
{
    dollars = 0;
    cents = 0;
}
Money::Money(int dollars, int cents)
{
    this->dollars = dollars;
    this->cents = cents;
}
float Money::getTotal()
{
    float total;
    total = ((static_cast<float>(cents))/100);
    total += static_cast<float>(dollars);
    return total;
}