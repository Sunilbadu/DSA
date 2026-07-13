#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;                 // highest precedence
    else if (op == '*' || op == '/') return 2;
    else if (op == '+' || op == '-') return 1;
    else return 0;
}

bool isOperator(char ch) {
    return (ch == '^' || ch == '*' || ch == '+' || 
            ch == '-' || ch == '(' || ch == ')' || ch == '/');
}

int main() {
    stack<char> s;
    char a[100];
    int n = 0, j = 0;

    cout << "Enter the expression (? to abort the input): ";
    // Input loop until '?' is entered
    do {
        cin >> a[n];
        n++;
    } while (a[n - 1] != '?');
    n--; // remove '?'

    char postfix[100];

    for (int i = 0; i < n; i++) {
        char ch = a[i];

        if (!isOperator(ch)) {
            postfix[j++] = ch; // operand goes directly to output
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix[j++] = s.top();
                s.pop();
            }
            if (!s.empty()) s.pop(); // remove '('
        }
        else { // operator case
            while (!s.empty() && s.top() != '(' && precedence(s.top()) >= precedence(ch)) {
                postfix[j++] = s.top();
                s.pop();
            }
            s.push(ch); // ? semicolon added
        }
    }

    // Pop remaining operators
    while (!s.empty()) {
        postfix[j++] = s.top();
        s.pop();
    }

    postfix[j] = '\0'; // null terminate string
    cout << "Postfix is: " << postfix << endl;

    return 0;
}

