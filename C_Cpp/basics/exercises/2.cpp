/**
 * @author Roberto Vicario (C) 2024
*/

#include <cmath>
#include <iostream>
using namespace std;

/**
 * Check the sign of a number.
 * 
 * @param num The number to be checked.
 */
void check_sign(int num) {
    if (num > 0)
        cout << "Positive" << endl;
    else if (num < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}

/**
 * Calculate the grade based on the score.
 *
 * @param score The numerical score.
 * @return The corresponding letter grade.
 */
char calculate_grade(int score) {
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

/**
 * Classify a triangle based on the lengths of its sides.
 *
 * @param a Length of side a.
 * @param b Length of side b.
 * @param c Length of side c.
 */
void classify_triangle(int a, int b, int c) {
    if (a == b && b == c)
        cout << "Equilateral triangle" << endl;
    else if (a == b || b == c || c == a)
        cout << "Isosceles triangle" << endl;
    else
        cout << "Scalene triangle" << endl;
}

/**
 * Check if a character is a vowel.
 *
 * @param ch The character to be checked.
 * @return True if the character is a vowel, false otherwise.
 */
bool is_vowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    else
        return false;
}

/**
 * Solve a quadratic equation.
 *
 * @param a Coefficient of x^2.
 * @param b Coefficient of x.
 * @param c Constant term.
 */
void solve_quadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root << endl;
    } else {
        cout << "Roots are complex." << endl;
    }
}
