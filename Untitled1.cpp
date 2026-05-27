#include <iostream>
using namespace std;

#define MAX 5
class Stack {
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.peek();
    return 0;
}

