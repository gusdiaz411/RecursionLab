//
// Created by Gustavo Diaz on 11/17/25.
//

#ifndef RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H
#define RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H

// --- Challenge 1: Function Prototypes ---

/**
 * @brief Calculates the factorial of a non-negative integer recursively.
 * @param n The number.
 * @return n! (n factorial)
 */
// TODO: Write a recursinve function to calculate n factoral
long long factorial(int n);

/**
 * @brief Calculates the nth Fibonacci number recursively.
 * @param n The position in the sequence (0-indexed).
 * @return The Fibonacci number at position n.
 */
// TODO: Write a recursinve function that calculates the fibonacci value at position n
int fibonacci(int n);

/**
 * @brief Calculates the sum of the digits of a non-negative integer recursively.
 * @param n The number.
 * @return The sum of its digits.
 */
// TODO: Write a recursive function that calculates the sum of a series of digits
int sumDigits(int n);


// --- Challenge 2: Function Prototype ---

/**
 * @brief Solves the Tower of Hanoi puzzle recursively.
 *
 * Prints the steps required to move n discs from a source peg
 * to a destination peg using an auxiliary peg.
 *
 * @param n The number of discs.
 * @param source The source peg (e.g., 'A').
 * @param auxiliary The auxiliary peg (e.g., 'B').
 * @param destination The destination peg (e.g., 'C').
 */
// TODO: Write a recursinve function that solves the "Towers of Hanoi" problem
void towerOfHanoi(int n, char source, char auxiliary, char destination);


#endif //RECURSIONLABSTARTER_RECURSIVEFUNCTIONS_H
