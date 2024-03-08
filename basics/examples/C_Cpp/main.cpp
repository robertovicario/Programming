#include <iostream>
using namespace std;

void than_five() {
    cout << "enter a number: ";
    int num; cin >> num;

    if (num > 5) {
        cout << num << " is greater than 5" << endl;
    } else if (num < 5) {
        cout << num << " is less than 5" << endl;
    } else {
        cout << num << " is equal to 5" << endl;
    }
}

int main() {
    than_five();

    return 0;
}
