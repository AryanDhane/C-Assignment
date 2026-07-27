#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum = sum + j;
        }
    }
    cout << "Sum of the series is: " << sum << endl;
    return 0;
}



// output

// Enter the value of n: 5
// Sum of the series is: 35
