// Copyright 2025 Mikhail Ibrahim
// Date: Apr 14, 2025
// Description: A C++ program that calculates the factorial of a non-negative
// whole number using a do..while style loop and includes input error handling.

#include <iostream>
#include <limits>  // To handle input errors

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;

    // Ask the user to input a number
    cout << "Welcome! This program calculates the factorial of a whole "
         << "number." << endl;
    cout << "Enter a non-negative whole number: ";
    cin >> number;

    // Input validation
    if (cin.fail()) {
        cin.clear();  // Clear input stream error flags
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid input. Please enter digits only (no letters, symbols, "
             << "or decimals)." << endl;
        return 1;  // Exit program with error code
    }

    if (number < 0) {
        cout << "Error: Please enter a non-negative number." << endl;
        return 1;
    }

    // Valid input - proceed to factorial calculation
    int factorial = 1;
    int counter = 1;

    do {
        factorial *= counter;
        counter++;
    } while (counter <= number);

    cout << "The factorial of " << number << " is " << factorial << "." << endl;

    return 0;
}
