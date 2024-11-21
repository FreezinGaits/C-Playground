#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "Enter the length of one side of the equilateral triangle: ";
    cin >> a;

    double area = (sqrt(3) / 4) * a * a;

    cout << "The area of the equilateral triangle is: " << area << endl;

    return 0;
}

