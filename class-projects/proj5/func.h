
#include <iostream>
using namespace std;
void instructions()
{
    // Print out instructions.
    cout << "Choose whether to draw a triangle (1), diamond (2), right triangle (3), or sideways triangle (4). Enter any other number to quit." << endl;
}

int menu()
{
    int choice;
    cout << "Enter shape number: " << endl;
    cin >> choice;
    return choice;
}

void draw_triangle(int size, char c)
{
   for(int line(0); line < size;line++)
    {
        int space_count = size - line - 1;
        for(int i(0);i <space_count;i++)
            cout <<" ";
        
        int char_count = 2*line +1;
        for(int i(0);i <char_count;i++)
            cout << c;
        
        cout << endl;
    }
}

void draw_bottom(int size, char c)
{
     for(int line(size-1); line >= 0;line--)
    {
        int space_count = size - line;
        for(int i(0);i <space_count;i++)
            cout <<" ";
        
        int char_count = 2*line +1;
        for(int i(0);i <char_count;i++)
            cout << c;
        
        cout << endl;
    }
}

void draw_diamond(int size, char c)
{
    draw_triangle(size, c);
    draw_bottom(size-1, c);
}

void draw_righttriangle(int size, char c)
{
    for(int line(0); line < size;line++)
    {        
        int char_count = line +1;
        for(int i(0);i <char_count;i++)
            cout << c;
        
        cout << endl;
    }
}

void draw_sidewaystriangle(int size, char c)
{
    draw_righttriangle(size, c);
    size--;
    for(int line(size-1);line >= 0;line--)
    {        
        int char_count = line +1;
        for(int i(0);i <char_count;i++)
            cout << c;
        
        cout << endl;
    }
}

void draw_shape(int choice)
{
    int size;
    char c;
    cout << "Enter character: " << endl;
    cin >> c;
    cout << "Enter size: " << endl;
    cin >> size;

    switch (choice)
    {
    case 1:
        draw_triangle(size, c);
        break;
    case 2:
        draw_diamond(size, c);
        break;
    case 3:
        draw_righttriangle(size, c);
        break;
    case 4:
        draw_sidewaystriangle(size, c);
        break;
    default:
        cout << "shape error";
        break;
    }    
}