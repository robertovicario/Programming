/**
 * @author Roberto Vicario (C) 2024
*/

#include <iostream>
using namespace std;

/**
 * @brief Calculate the factorial of a given integer using a while loop.
 * @param num The integer for which factorial needs to be calculated.
 * @return The factorial of the given integer.
 */
int factorial_calculation(int num)
{
    int factorial = 1;
    while (num > 0) {
        factorial *= num;
        num--;
    }

    return factorial;
}

/**
 * @brief Check whether a given number is prime or not using a while loop.
 * @param num The number to be checked for primality.
 * @return 1 if the number is prime, 0 otherwise.
 */
int is_prime(int num)
{
    if (num <= 1)
        return 0;

    int i = 2;
    while (i * i <= num) {
        if (num % i == 0)
            return 0;
        i++;
    }
    return 1;
}

/**
 * @brief Check if a given string is a palindrome using a while loop.
 * @param str The string to be checked for palindrome.
 * @return 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(const char *str)
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }

    return 1;
}

/**
 * @brief Find the GCD of two numbers using the Euclidean algorithm and a while loop.
 * @param a The first number.
 * @param b The second number.
 * @return The greatest common divisor of a and b.
 */
int gcd(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/**
 * @brief Calculate the power of a number using a while loop.
 * @param base The base number.
 * @param exponent The exponent.
 * @return The result of base raised to the exponent.
 */
double power(double base, int exponent)
{
    double result = 1.0;
    int i = 0;
    while (i < exponent) {
        result *= base;
        i++;
    }
    return result;
}
