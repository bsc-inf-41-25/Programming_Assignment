#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize random seed
    srand(time(0)); 
    
    // Generate random number between 0 and 11
    int daysUntilExpiration = rand() % 12;
    
    cout << "Days until expiration: " << daysUntilExpiration << endl;
    
    // Using if and if-else statements
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    }
    else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day! Renew now and save 20%" << endl;
    }
    else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration 
             << " days. Renew now and save 10%" << endl;
    }
    else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    else {
        cout << "You have an active subscription." << endl;
    }
    
    return 0;
}