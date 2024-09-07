#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    // Ask the user to enter an operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    // Ask the user to enter two operands
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the appropriate operation based on user input
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            // If the user enters an invalid operator
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}
