#include <iostream>
using namespace std;

int main() {
    int originalNumber, reversedNumber = 0;

    cout << "Enter a positive integer: ";
    cin >> originalNumber;

    int temp = originalNumber; // Preserve the original number

    while (temp != 0) {
        int digit = temp % 10; // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        temp /= 10; // Move to the next digit
    }

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}


