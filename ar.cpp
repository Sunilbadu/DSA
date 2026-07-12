#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "\nYou entered: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    cout << "\nSum of elements = " << sum << endl;

    return 0;
}
