#include <iostream>
#include "Derived.h"
using namespace std;

int main() {
    Base* pba = new Derived();  // Points to a Derived object
    Base* pbb = new Base();      // Points to a Base object
    Derived* pd;
    
    cout << "First dynamic_cast (pba -> Derived):\n";
    pd = dynamic_cast<Derived*>(pba);
    if (pd == nullptr) {
        cout << "Null pointer on first type-cast.\n";
    } else {
        cout << "Success! First type-cast worked.\n";
    }
    
    cout << "\nSecond dynamic_cast (pbb -> Derived):\n";
    pd = dynamic_cast<Derived*>(pbb);
    if (pd == nullptr) {
        cout << "Null pointer on second type-cast.\n";
    } else {
        cout << "Success! Second type-cast worked.\n";
    }
    
    delete pba;
    delete pbb;
    
    return 0;
}