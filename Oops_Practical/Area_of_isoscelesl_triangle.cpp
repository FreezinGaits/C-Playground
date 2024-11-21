#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a;
    cout << "Enter the length of one side of the isosceles triangle: ";
    cin >> a;

    double b;
    cout << "Enter the length of the base of the isosceles triangle: ";
    cin >> b;

    double height = sqrt(a * a - (b / 2) * (b / 2));

    double area = 0.25 * b * height;

    cout << "The area of the isosceles triangle is: " << area << endl;

    return 0;
}

