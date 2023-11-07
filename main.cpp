#include <iostream>

using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Enter the first number:" << endl;
        return 0;
    }
}

int main() {
    float (*operations[4])(float, float) = { add, subtract, multiply, divide };

    int choice;
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Select an operation:\n";
    cout << "1.(+)\n";
    cout << "2.(-)\n";
    cout << "3.(*)\n";
    cout << "4.(/)\n";
    cout << "Your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        
        float result = operations[choice - 1](num1, num2);
        cout << "Result: " << result << endl;
    }
    else {
        cout << "Wrong choice of operation." << endl;
    }

    return 0;
}
