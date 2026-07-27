#include <iostream>
using namespace std;

int main() {
    int num, num1, rev = 0, rem;
    cout << "Enter a number: ";
    cin >> num;
    num1 = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (num1 == rev)
        cout << num1 << " is a palindrome number." << endl;
    else
        cout << num1 << " is not a palindrome number." << endl;
    return 0;
}
