/**
 * @author Roberto Vicario (C) 2024
*/

#include <iostream>
using namespace std;

#include "exercises/1.cpp"
#include "exercises/2.cpp"
#include "exercises/3.cpp"
#include "exercises/4.cpp"

/**
 * Main function
*/
int main() {
    print("What's your name?");
    string str;
    str = input();
    print("Hello, " + str + "!");

    return 0;
}
