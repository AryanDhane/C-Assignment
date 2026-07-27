// list the terms of Fibonacci series.  

#include <iostream>
using namespace std;

int main() {
    int n, f1 = 0, f2 = 1, f3;
    cout << "Enter how many number of terms of Fibonacci series u want to display ? ";
    cin >> n;
    cout << "Fibonacci Series: ";
    cout << f1 << " " << f2 << " ";
    for (int i = 0; i < n - 2; i++) {
        f3 = f1 + f2;
        cout << f3 << " ";
        f1 = f2;
        f2 = f3;
    }
    return 0;
}


// output

// Enter how many number of terms of Fibonacci series u want to display ? 10
// Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 