#include<iostream>
#include "func.h"
using namespace std;
// This function describes the program and how it works.
void instructions();
//  This function will return a choice to the main ; 1) draw triangle, 2) draw diamond, and 3) quit
int menu();
// This function calls on appropriate function depending on the choice to draw a shape
void draw_shape(int choice);
// This function draws a triangle of size size using character c
int get_size();
// This function will ask users to select a character that will be used to draw the shape.
char get_char();
// This function draws a triangle of size size using character c.
void draw_triangle(int size, char c);
// This function first calls draw_triangle, then draw_bottom to draw the diamond.
void draw_diamond(int size, char c);
// This function actually draws an upside down triangle of size size-1 as the bottom of the diamond.
void draw_bottom(int size, char c);
// This function draws a right triangle
void draw_righttriangle(int size, char c);
// This function draws a sideways triangle
void draw_sidewaystriangle(int size, char c);

int main()
{
    int choice;

    instructions();
    choice = menu();
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        cout << "You requested to quit, bye.\n";
        return 0;
    }

    draw_shape(choice);

    return 0;
}