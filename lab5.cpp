#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;

    cout << "Enter an integer: ";
    cin >> number;

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    cout << "Reversed Integer: " << reversed << endl;

    return 0;
}