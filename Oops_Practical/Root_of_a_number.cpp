#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number;
    cout << "Enter a positive number: ";
    cin >> number;

    // Calculate square root and cube root
    double squareRoot = sqrt(number);
    double cubeRoot = cbrt(number);

    cout << "Square Root: " << squareRoot << endl;
    cout << "Cube Root: " << cubeRoot << endl;

    return 0;
}

