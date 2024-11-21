#include <iostream>
using namespace std;

class Object {
public:
    Object() {
        cout << "An object appears!" << endl;
    }

    Object(const char* purpose) {
        cout << "A specialized object appears: " << purpose << endl;
    }

    ~Object() {
        cout << "The object disappears." << endl;
    }
};

int main() {
    Object defaultObj; // The default object
    Object specializedObj("Custom Tool"); // A specialized object

    // The program continues...

    // The destructor gracefully dismisses our objects

    return 0;
}

