#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // First rectangle using default constructor
    Rectangle rect1;
    float length1, width1;
    
    cout << "Enter length for first rectangle: ";
    cin >> length1;
    cout << "Enter width for first rectangle: ";
    cin >> width1;
    
    rect1.setLength(length1);
    rect1.setWidth(width1);
    
    cout << "Area of first rectangle: " << rect1.calculateArea() << endl;
    
    // Second rectangle using overloaded constructor
    float length2, width2;
    
    cout << "\nEnter length for second rectangle: ";
    cin >> length2;
    cout << "Enter width for second rectangle: ";
    cin >> width2;
    
    Rectangle rect2(length2, width2);
    
    cout << "Area of second rectangle: " << rect2.calculateArea() << endl;
    
    return 0;
}