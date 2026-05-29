#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;   // base case
    if (n == 1) return 1;   // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
}

int main() {
    int n = 10;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}

