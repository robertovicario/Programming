/**
 * @author Roberto Vicario (C) 2024
*/

#include <iostream>
using namespace std;

/**
 * Calculate the factorial of a given integer using a while loop.
 *
 * @param num The integer for which factorial needs to be calculated.
 * @return The factorial of the given integer.
 */
int factorial_calculation_v2(int num) {
    int factorial = 1;
    for (int i = num; i > 0; i--) {
        factorial *= i;
    }

    return factorial;
}

/**
 * Check whether a given number is prime or not using a while loop.
 *
 * @param num The number to be checked for primality.
 * @return 1 if the number is prime, 0 otherwise.
 */
int is_prime_v2(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

/**
 * Check if a given string is a palindrome using a while loop.
 *
 * @param str The string to be checked for palindrome.
 * @return 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_v2(const char *str) {
    int length = strlen(str);
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        if (str[start] != str[end])
            return 0;
    }

    return 1;
}

/**
 * Find the GCD of two numbers using the Euclidean algorithm and a while loop.
 *
 * @param a The first number.
 * @param b The second number.
 * @return The greatest common divisor of a and b.
 */
int gcd_v2(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/**
 * Calculate the power of a number using a while loop.
 *
 * @param base The base number.
 * @param exponent The exponent.
 * @return The result of base raised to the exponent.
 */
double power_v2(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
