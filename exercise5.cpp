#include <iostream>
using namespace std;

// Function to calculate triangle area
double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate rectangle area
double rectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate square area
double squareArea(double side) {
    return side * side;
}

int main() {
    int choice;
    bool running = true;
    
    while(running) {
        // Display menu
        cout << "\n=== Shape Area Calculator ===" << endl;
        cout << "Select a shape to calculate area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        
        cin >> choice;
        
        // Validate input
        if(cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }
        
        switch(choice) {
            case 1: { // Triangle
                double base, height;
                cout << "Enter base length: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                cout << "Area of triangle: " << triangleArea(base, height) << endl;
                break;
            }
            case 2: { // Rectangle
                double length, width;
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                cout << "Area of rectangle: " << rectangleArea(length, width) << endl;
                break;
            }
            case 3: { // Square
                double side;
                cout << "Enter side length: ";
                cin >> side;
                cout << "Area of square: " << squareArea(side) << endl;
                break;
            }
            case 4: // Quit
                running = false;
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1-4." << endl;
        }
    }
    
    return 0;
}