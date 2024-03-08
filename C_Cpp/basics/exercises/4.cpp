/**
 * @author Roberto Vicario (C) 2024
*/

#include <iostream>
using namespace std;

int factorial_calculation_v2(int num)
{
    int factorial = 1;
    for (int i = num; i > 0; i--) {
        factorial *= i;
    }
    return factorial;
}

int is_prime_v2(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int is_palindrome_v2(const char *str)
{
    int length = strlen(str);
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        if (str[start] != str[end])
            return 0;
    }
    return 1;
}

int gcd_v2(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

double power_v2(double base, int exponent)
{
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
