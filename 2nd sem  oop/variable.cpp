#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

// Function to modify the global variable
void modifyGlobalVar() {
    globalVar = 20;
}

// Function to print the global variable
void printGlobalVar() {
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    printGlobalVar();  // Print initial value
    modifyGlobalVar(); // Modify the global variable
    printGlobalVar();  // Print modified value
    
    return 0;
}