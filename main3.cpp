#include "Person.h"
#include <iostream>
using namespace std;

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);
    
    // Test operator+ (weight addition)
    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;
    
    // Test == and != operators using names
    if (Jane == John) {
        cout << "This is the same person" << endl;
    }
    if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }
    
    // Set ages for comparison
    Jane.SetAge(25);
    John.SetAge(30);
    
    // Test < and > operators using age
    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    }
    if (John > Jane) {
        cout << "John is older than Jane" << endl;
    }
    
    // Test conversion operators
    int janeAge = (int)Jane;
    float janeWeight = (float)Jane;
    
    cout << "Conversion Operators Demo" << endl;
    cout << "Jane's age (as int): " << janeAge << endl;
    cout << "Jane's weight (as float): " << janeWeight << endl;
    
    return 0;
}