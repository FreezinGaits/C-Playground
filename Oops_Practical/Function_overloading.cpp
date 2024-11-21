#include <iostream>
using namespace std;

// Function to enchant integers
void castSpell(int num) {
    cout << "You've summoned an integer: " << num << endl;
}

// Function to conjure doubles
void castSpell(double num) {
    cout << "You've conjured a double: " << num << endl;
}

// Function to invoke strings
void castSpell(const char* message) {
    cout << "You've invoked a mystical message: " << message << endl;
}

int main() {
    castSpell(42); // Enchant an integer
    castSpell(3.14); // Conjure a double
    castSpell("Abracadabra!"); // Invoke a string

    return 0;
}

