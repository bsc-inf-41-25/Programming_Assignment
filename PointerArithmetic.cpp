#include <iostream>
using namespace std;

int main(){
    //null pointer
    int *pPointer = nullptr;

    int numbersArray[3] = {10,20,30};
    
    //assign address of the first element
    pPointer = numbersArray;

    //output the address of the first element 
    cout << "Adsress of pPointer: "<< pPointer << endl;
    cout << "Address of the numbersArray[0]: " << numbersArray << endl;

    //output the value of the first element using the pointer and indirection 
    cout << "Value at pPointer: " << *pPointer << endl;
    
    //this putputs the value of the second element
    cout << "Value at ++pPointer: " << *(++pPointer) << endl;

    //assign address of the first element to the pointer 
    pPointer = numbersArray;

    //this outputs the value pf the first element
    cout << "Value at the pPounter++: " << *(pPointer++) << endl;

    return 0;
    
}