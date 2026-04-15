#include "Person.h"
#include <string>

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string newFirstName, float newWeight) {
    mFirstName = newFirstName;
    mWeight = newWeight;
    mAge = 25; // Default age
}

Person::Person(float newWeight) {
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

Person::~Person() {
}

// Overload + operator to add weights of two persons
float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

// Overload == operator using mFirstName
bool Person::operator==(const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

// Overload != operator using mFirstName
bool Person::operator!=(const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

// Overload < operator using mAge
bool Person::operator<(const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

// Overload > operator using mAge
bool Person::operator>(const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}

// Conversion operator to convert Person to int (returns age)
Person::operator int() {
    return mAge;
}

// Conversion operator to convert Person to float (returns weight)
Person::operator float() {
    return mWeight;
}
void Person::SetAge(int age) {
    mAge = age;
}

void Person::SetFirstName(string name) {
    mFirstName = name;
}