/**
 * @author Roberto Vicario (C) 2024
*/

#include <iostream>
using namespace std;

/**
 * Prints a string followed by a newline character.
 *
 * @param str The string to be printed.
 */
void print(const string& str) {
    cout << str << endl;
}

/**
 * This function reads a string input from the standard input (cin).
 *
 * @return The string input read from the standard input.
 */
string input() {
    string str;
    cin >> str;

    return str;
}

/**
 * Swaps the values of two integers.
 *
 * @param a The first integer.
 * @param b The second integer.
 */
void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
