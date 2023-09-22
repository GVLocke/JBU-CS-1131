#include <iostream>
using namespace std;

struct PersonInfo
    {
        int birthday[3];
        double height;
        double weight;
        char name[20];
    };
int main()
{
    PersonInfo person;
    cout << "Enter your birthday (mm dd yyyy): ";
    cin >> person.birthday[0] >> person.birthday[1] >> person.birthday[2];
    cout << "Enter your height (in inches): ";
    cin >> person.height;
    cout << "Enter your weight (in pounds): ";
    cin >> person.weight;
    cout << "Enter your name: ";
    cin >> person.name;
    cout << "Your birthday is " << person.birthday[0] << "/" << person.birthday[1] << "/" << person.birthday[2] << endl;
    cout << "Your height is " << person.height << " inches" << endl;
    cout << "Your weight is " << person.weight << " pounds" << endl;
    cout << "Your name is " << person.name << endl;
    return 0;
}