#include <iostream>
using namespace std;

// Function to convert a character to its ASCII value
int Convert(char c = '%') {
    return int(c);  // Returns the ASCII value of the character
}

int main() {
    char userChar;

    // Prompt the user to enter a character
    cout << "Enter a character: ";
    cin >> userChar;

    // Display the ASCII value of the entered character
    cout << "ASCII value of ' " << userChar << "' : " << Convert(userChar) << endl;

    // Display the ASCII value of the default character
    cout << "ASCII value of default '%' : " << Convert() << endl;

    return 0;
}
