#include <iostream>
using namespace std;

class Stack {
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int topIndex;

public:
    Stack() : topIndex(-1) {}

    bool isEmpty() const {
        return topIndex == -1;
    }

    bool isFull() const {
        return topIndex == MAX_SIZE - 1;
    }

    bool push(int value) {
        if (isFull()) {
            return false;
        }
        data[++topIndex] = value;
        return true;
    }

    bool pop(int &value) {
        if (isEmpty()) {
            return false;
        }
        value = data[topIndex--];
        return true;
    }

    bool peek(int &value) const {
        if (isEmpty()) {
            return false;
        }
        value = data[topIndex];
        return true;
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements (top to bottom):" << endl;
        for (int i = topIndex; i >= 0; --i) {
            cout << data[i] << endl;
        }
    }
};

int main() {
    Stack stack;
    int value;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "After pushing 10, 20, 30:" << endl;
    stack.display();

    if (stack.pop(value)) {
        cout << value << " popped from stack." << endl;
    } else {
        cout << "Stack underflow." << endl;
    }

    cout << "After popping one item:" << endl;
    stack.display();

    if (stack.peek(value)) {
        cout << "Top element is: " << value << endl;
    } else {
        cout << "Stack is empty." << endl;
    }

