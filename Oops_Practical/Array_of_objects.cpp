#include <iostream>
using namespace std;

// Our humble Tool class
class Tool {
public:
    Tool(const char* name) {
        toolName = name;
    }

    void use() {
        cout << "Using " << toolName << "..." << endl;
    }

private:
    const char* toolName;
};

int main() {
    // Create an array of Tool objects
    Tool toolbox[3] = {
        Tool("Hammer"),
        Tool("Screwdriver"),
        Tool("Wrench")
    };

    // Let's put our tools to work!
    for (int i = 0; i < 3; ++i) {
        toolbox[i].use();
    }

    return 0;
}

