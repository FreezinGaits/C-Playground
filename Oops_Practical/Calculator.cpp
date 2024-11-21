#include <iostream>
using namespace std;
int main() {
	char operation;
	double num1, num2;
start:
	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	double result;

	switch (operation) {
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
			if (num2 != 0) {
				result = num1 / num2;
			} else {
				cout << "Error: Division by zero is forbidden!" << endl;
				return 1; // Exit with an error code
			}
			break;
		default:
			cout << "Invalid operation. Try +, -, *, or /." << endl;
//            return 1; // Exit with an error code
            goto start;
	}

	cout << "Result: " << result << endl;
	return 0;
}
