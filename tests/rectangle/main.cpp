#include <iostream>
using namespace std;
class Rectangle
{
    public:
        int area();
        int length, width;
        string name;
};
int main()
{
    Rectangle rect;
    cout << "Please enter the length of the rectangle: ";
    cin >> rect.length;
    cout << "Please enter the width of the rectangle: ";
    cin >> rect.width;
    cin.ignore(1000, '\n');
    cout << "Please enter the name of the rectangle: ";
    getline(cin, rect.name);
    cout << "The area of the rectangle is " << rect.area()
         << " and the name of the rectangle is " << rect.name << endl;
    return 0;
}

int Rectangle::area()
{
    return length * width;
}