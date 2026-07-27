#include <iostream>
using namespace std;

int main() {
    int decimal, remainder;
    string hex = "";

    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal;

    if (decimal == 0) {
        cout << "Hexadecimal: 0" << endl;
        return 0;
    }

    while (decimal > 0) {
        remainder = decimal % 16;

        if (remainder < 10)
            hex = char(remainder + '0') + hex;
        else
            hex = char(remainder - 10 + 'A') + hex;

        decimal = decimal / 16;
    }

    cout << "Hexadecimal of " << num << " is: " << hex << endl;
    return 0;
}