#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)   // base case
        return 1;
    return n * factorial(n - 1);  // recursive case
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " = " << factorial(num);
    return 0;
}
