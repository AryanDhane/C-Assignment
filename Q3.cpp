#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Division by zero error." << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}



// output

// Enter first number: 12
// Enter second number: 34
// Enter operator (+, -, *, /): +
// Result: 46