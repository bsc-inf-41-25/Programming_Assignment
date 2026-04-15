#include <iostream>
#include <limits>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice;
    float value1, value2;
    
    do {
        cout << " Shape Area Calculator" << endl;
        cout << "1. Calculate area of a Square" << endl;
        cout << "2. Calculate area of a Triangle" << endl;
        cout << "3. Calculate area of a Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                cout << "Enter side length of square: ";
                cin >> value1;
                Square square(value1);
                float area = Area::calculateSquareArea(square);
                cout << "Area of square: " << area << endl;
                break;
            }
            case 2: {
                cout << "Enter base of triangle: ";
                cin >> value1;
                cout << "Enter height of triangle: ";
                cin >> value2;
                Triangle triangle(value1, value2);
                float area = Area::calculateTriangleArea(triangle);
                cout << "Area of triangle: " << area << endl;
                break;
            }
            case 3: {
                cout << "Enter radius of circle: ";
                cin >> value1;
                Circle circle(value1);
                float area = Area::calculateCircleArea(circle);
                cout << "Area of circle: " << area << endl;
                break;
            }
            case 4:
                cout << "Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while(choice != 4);
    
    return 0;
}