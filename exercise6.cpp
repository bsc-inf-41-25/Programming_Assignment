#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

// Function to reverse a string
string Reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

// Function to count vowels
int countVowels(string text) {
    int count = 0;
    for(char c : text) {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words
int countWords(string text) {
    int count = 0;
    istringstream iss(text);
    string word;
    while(iss >> word) {
        count++;
    }
    return count;
}

// Function to capitalize second letter of each word
string capitalizeSecondLetters(string text) {
    istringstream iss(text);
    string word;
    string result;
    
    while(iss >> word) {
        if(word.length() >= 2) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    
    // Remove trailing space
    if(!result.empty()) {
        result.pop_back();
    }
    
    return result;
}

int main() {
    string fileData;
    string line;
    
    // Open and read the file
    ifstream file("data.txt");
    
    if(file.is_open()) {
        while(getline(file, line)) {
            fileData += line;
        }
        file.close();
        
        cout << "File content: " << fileData << endl;
        cout << "----------------------------------------" << endl;
        
        // Count vowels
        cout << "Number of vowels: " << countVowels(fileData) << endl;
        
        // Count words
        cout << "Number of words: " << countWords(fileData) << endl;
        
        // Reverse the statement
        cout << "Reversed statement: " << Reverse(fileData) << endl;
        
        // Capitalize second letters
        cout << "Second letter capitalized: " << capitalizeSecondLetters(fileData) << endl;
    }
    else {
        cout << "Unable to open file. Make sure data.txt exists in the current directory." << endl;
    }
    
    return 0;
}