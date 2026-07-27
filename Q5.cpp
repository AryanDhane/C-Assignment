#include <iostream>
using namespace std;

int main() {
    float real1, imag1, real2, imag2, realSum, imagSum;

    cout << "Enter real part of first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imag1;

    cout << "Enter real part of second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imag2;

    realSum = real1 + real2;
    imagSum = imag1 + imag2;
    

    cout << "Sum = " << realSum << " + " << imagSum << "i" << endl;
    return 0;
}



// output

// Enter real part of first complex number: 10
// Enter imaginary part of first complex number: 12
// Enter real part of second complex number: 13
// Enter imaginary part of second complex number: 14
// Sum = 23 + 26i