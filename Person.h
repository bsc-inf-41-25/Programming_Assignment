#pragma once

#include <string>
#include <iostream>
using namespace std;

class Person {
public:
    Person();
    Person(string newFirstName, float newWeight);
    Person(float newWeight);
    ~Person();
    
    // Overload the add operator
    float operator+(const Person& otherPerson);
    
    // Overload equality operators using mFirstName
    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);
    
    // Overload relational operators using mAge
    bool operator<(const Person& otherPerson);
    bool operator>(const Person& otherPerson);
    
    // Conversion operator to convert Person to int (age)
    operator int();
    
    // Conversion operator to convert Person to float (weight)
    operator float();
    
    // Additional getters for demonstration
    string GetFirstName() const { return mFirstName; }
    int GetAge() const { return mAge; }
    float GetWeight() const { return mWeight; }

    void SetAge(int age);
    void SetFirstName(string name);
    
private:
    float mWeight;
    string mFirstName;
    int mAge;
};