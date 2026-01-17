/*  
    Victor Li 
    Chapter 2: Exercise 2
    This program assigns and outputs the length, width, area, and perimeter variables of a preset rectangle to the console
    Included at the bottom is the Optional Challenge
*/ 

#include <iostream>

using namespace std;

int main()
{
    const double length = 12.5, width = 8.3;
    const int numberTwo = 2;
    float area, perimeter;
    
//This determines the area and perimeter based on the length and width variables 
    area = length * width;
    perimeter = numberTwo * (length + width);
    
    cout << "Rectangle Calculator" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    
//This console output is for the Optional Challenge 
    cout << "\nOptional Challenge: \nThe side of a double is " << sizeof(double) << " bytes." << endl;
    
    return 0;
}
