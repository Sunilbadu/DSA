#include <iostream>
using namespace std;

int main() {
    int arr[5];   // Declare an array of size 5

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];   // Input values into the array
    }

    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";   // Display array elements
    }

    // Example: Find sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "\nSum of elements = " << sum << endl;

    return 0;
}
