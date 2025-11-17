//
// Created by Gustavo Diaz on 11/17/25.
//
#include <iostream>
#include <string>
#include <limits> // Used for input validation
#include "recursiveFunctions.h"

// Using namespace std for simplicity, as is common in introductory labs.
using namespace std;

/**
 * @brief Utility function to get a non-negative integer from the user.
 * * This function handles invalid inputs (like text) and ensures the
 * number is not negative.
 *
 * @param prompt The message to display to the user.
 * @return A valid, non-negative integer.
 */
int getNonNegativeIntInput(string prompt) {
    int value;

    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail() || value < 0) {
            cout << "Invalid input. Please enter a NON-negative integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
    }
}

/**
 * @brief Utility function to get a positive integer from the user.
 *
 * This function handles invalid inputs (like text) and ensures the
 * number is positive (>= 1).
 *
 * @param prompt The message to display to the user.
 * @return A valid, positive integer.
 */
int getPositiveIntInput(string prompt) {
    int value;

    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail() || value < 1) {
            cout << "Invalid input. Please enter a POSITIVE integer (>= 1)." << endl;
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
    }
}


// --- Main Program ---

int main() {
    bool running = true;
    while (running) {
        cout << "\n--- C++ Recursion Lab Menu ---" << endl;
        cout << "1. Calculate Factorial" << endl;
        cout << "2. Calculate Fibonacci Number" << endl;
        cout << "3. Calculate Sum of Digits" << endl;
        cout << "4. Solve Tower of Hanoi" << endl;
        cout << "5. Quit" << endl;
        cout << "--------------------------------" << endl;

        int choice = getPositiveIntInput("Enter your choice (1-5): ");
        int n;

        switch (choice) {
            case 1: // Factorial
                n = getNonNegativeIntInput("Enter a non-negative number for factorial: ");
                // Factorial grows very fast, warn user about potential overflow
                if (n > 20) {
                    cout << "Input is very large. Result may overflow 'long long'." << endl;
                }
                cout << "Factorial of " << n << " is: " << factorial(n) << endl;
                break;

            case 2: // Fibonacci
                n = getNonNegativeIntInput("Enter a position (n) for Fibonacci: ");
                // Naive recursion is very slow for Fibonacci
                if (n > 40) {
                    cout << "Calculating... This may take a while due to O(2^n) complexity." << endl;
                }
                cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
                break;

            case 3: // Sum of Digits
                n = getNonNegativeIntInput("Enter a non-negative number to sum its digits: ");
                cout << "The sum of the digits in " << n << " is: " << sumDigits(n) << endl;
                break;

            case 4: // Tower of Hanoi
                n = getPositiveIntInput("Enter the number of discs for Tower of Hanoi (e.g., 3): ");
                if (n > 10) {
                    cout << "This will produce a very large number of steps!" << endl;
                }
                cout << "Solving Tower of Hanoi for " << n << " discs:" << endl;
                towerOfHanoi(n, 'A', 'B', 'C');
                break;

            case 5: // Quit
                running = false;
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
                break;
        }
    }

    return 0;
}
