#include <iostream>
using namespace std;
class DayOfYear
{
    public:
        void output();
        int month;
        int day;
        bool IsHoldiay();
};
int main()
{
    DayOfYear today;
    today.month = 9;
    today.day = 25;
    cout << "Today is ";
    today.output();
    if (today.IsHoldiay())
        cout << "It is a holiday!" << endl;
    else
        cout << "It is not a holiday." << endl;
    return 0;
}

void DayOfYear::output()
{
    cout << "month = " << month << ", day = " << day << endl;
}

bool DayOfYear::IsHoldiay()
{
    if (month == 1 && day == 1)
    {
        return true;
    }
    else if (month == 7 && day == 4)
    {
        return true;
    }
    else if (month == 12 && day == 25)
    {
        return true;
    }
    else
    {
        return false;
    }
}