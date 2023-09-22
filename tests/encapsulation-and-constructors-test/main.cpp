#include <iostream>
using namespace std;
class Rectangle 
{
private:
    int width, height;
public:
    Rectangle (int x, int y);
    Rectangle();
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    void setWidth(int x) {
       width = x;
    }
    void setHeight(int y) {
        height = y;
    }
    int getArea() {
        return width * height;
    }
};
// Basic Constructor
Rectangle::Rectangle(int x, int y) {
    setWidth(x);
    setHeight(y);
}
//default constructor
Rectangle::Rectangle() {
    setWidth(0);
    setHeight(0);
}

int main()
{
int width, height;
cout << "Enter width: ";
cin >> width;
cout << "Enter height: ";
cin >> height;
Rectangle rect(width, height);
cout << "Area: " << rect.getArea() << endl;
}