#include <iostream>
using namespace std;

int main() {
    int userInput;
    bool validInput = false;
    
    cout << "Please enter an integer value between 5 and 10: ";
    
    while(!validInput) {
        cin >> userInput;
        
        // Check if input is valid (between 5 and 10)
        if(userInput >= 5 && userInput <= 10) {
            validInput = true;
            cout << "Your input value (" << userInput << ") has been accepted." << endl;
        }
        else {
            cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        }
    }
    
    return 0;
}