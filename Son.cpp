#include "Son.h"
#include <iostream>
using namespace std;

Son::Son(int a) : Mother(a) {  // ← NOTE: explicitly calling Mother(int)
    cout << "Son: int parameter\n\n";
}