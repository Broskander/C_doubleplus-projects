#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main() {
    char choice;
    double num1, num2, result;

    cout << "Enter an operation - " << endl << "Operations: + | - | * | / | L: ";
    cin >> choice;

    if (choice == 'L') {
        cout << "Enter the base: ";
        cin >> num1;
        cout << "Enter the argument: ";
        cin >> num2;
        result = log(num2) / log(num1);
    }

    else {
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;

        switch(choice) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                cout << "Invalid Operator" << endl;
                return 1;
        }
    }
    cout << num1 << " " << choice << " " << num2 << " = " << result;
}
