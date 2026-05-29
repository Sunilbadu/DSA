#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;   // base case
    return (n % 10) + sumOfDigits(n / 10); // recursive case
}

int main() {
    int n = 1234;
    cout << "Sum of digits of " << n << " = " << sumOfDigits(n);
    return 0;
}

