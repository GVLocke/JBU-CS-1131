#include <iostream>
using namespace std;
enum Month {January = 1, February, March, April, May, June, July, August, September, October, November, December};
enum Month_Length {January_Length = 31, February_Length = 28, March_Length = 31, April_Length = 30, May_Length = 31, June_Length = 30, July_Length = 31, August_Length = 31, September_Length = 30, October_Length = 31, November_Length = 30, December_Length = 31};

class Date
{
    private:
        Month month;
        int day;
        int year;
    public:
        Date();
        Date(Month month, int day, int year);
        string getFullDate();
        Month getMonth();
        int getDay();
        int getYear();
        void setMonth(Month month);
        void setDay(int day);
        void setYear(int year);
        void checkDate();
};
Date::Date()
{
    month = January;
    day = 1;
    year = 2000;
}
Date::Date(Month month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
    checkDate();
}
string Date::getFullDate()
{
    string fullDate = "";
    switch (month)
    {
        case January:
            fullDate += "January";
            break;
        case February:
            fullDate += "February";
            break;
        case March:
            fullDate += "March";
            break;
        case April:
            fullDate += "April";
            break;
        case May:
            fullDate += "May";
            break;
        case June:
            fullDate += "June";
            break;
        case July:
            fullDate += "July";
            break;
        case August:
            fullDate += "August";
            break;
        case September:
            fullDate += "September";
            break;
        case October:
            fullDate += "October";
            break;
        case November:
            fullDate += "November";
            break;
        case December:
            fullDate += "December";
            break;
    }
    fullDate += " " + to_string(day) + ", " + to_string(year);
    return fullDate;
};
Month Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
int Date::getYear()
{
    return year;
}
void Date::setMonth(Month month)
{
    this->month = month;
}
void Date::setYear(int year)
{
    this->year = year;
}
void Date::setDay(int day)
{
    this->day = day;
}
void Date::checkDate()
{
    switch (month)
    {
        case January:
            if(day > January_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case February:
            if(day > February_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case March:
            if(day > March_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case April:
            if(day > April_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case May:
            if(day > May_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case June:
            if(day > June_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case July:
            if(day > July_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case August:
           if(day > August_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case September:
            if(day > September_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case October:
            if(day > October_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case November:
            if(day > November_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
        case December:
            if(day > December_Length)
            {
                cout << "Invalid date. Exiting...";
                exit(1);
            }
    }
}
