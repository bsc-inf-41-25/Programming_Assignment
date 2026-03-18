#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize array with the elements shown in the PDF
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    // Calculate array size
    int arraySize = sizeof(elements) / sizeof(elements[0]);
    
    cout << "Elements starting with 'B':" << endl;
    
    // For loop to iterate through array
    for(int i = 0; i < arraySize; i++) {
        // Check if element starts with 'B'
        if(elements[i][0] == 'B') {
            cout << elements[i] << endl;
        }
    }
    
    return 0;
}