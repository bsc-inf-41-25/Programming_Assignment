#include <iostream>
#include "Daughter.h"
#include "Son.h"
using namespace std;

int main() {
    cout << "Creating Daughter:\n";
    Daughter theDaughter(1);
    
    cout << "\nCreating Son:\n";
    Son theSon(2);
    
    return 0;
}