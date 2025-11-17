//
// Created by Gustavo Diaz on 11/17/25.
//

#include <iostream>
#include "recursiveFunctions.h"

using namespace std;

// --- Challenge 1 Implementations ---

long long factorial(int n) {
    if (n == 0 || n == 1) {        // Base case
        return 1;
    }
    return n * factorial(n - 1);   // Recursive step
}

int fibonacci(int n) {
    if (n == 0) return 0;          // Base case 1
    if (n == 1) return 1;          // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive step
}

int sumDigits(int n) {
    if (n < 10) return n;          // Base case: single digit
    return (n % 10) + sumDigits(n / 10); // Recursive step
}


// --- Challenge 2 Implementation ---

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) { // Base case
        cout << "Move disc 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move top n-1 discs from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move nth disc to destination
    cout << "Move disc " << n << " from " << source << " to " << destination << endl;

    // Move n-1 discs from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}
