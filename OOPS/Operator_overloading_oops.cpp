#include<iostream>
using namespace std;

class A {
private:
    int weight;
public:
    A(int x = 0) { // Constructor with default value
        weight = x;
    }

    A addWeight(A w2) { // Method to add weights
        A temp;
        temp.weight = weight + w2.weight;
        return temp;
    }

    int getWeight() { // Method to return the weight
        return weight;
    }
};

int main() {
    int a = 63, b = 74, c = 0;
    c = a + b; // Simple addition of integers
    cout << "Sum of integers a and b: " << c << endl;

    A person1(63); // Create an object of class A with weight 63
    A person2(74); // Create an object of class A with weight 74
    A total;

    total = person1.addWeight(person2); // Add weights of person1 and person2
    cout << "Total weight after person1 adds person2: " << total.getWeight() << endl;

    total = person2.addWeight(person1); // Add weights of person2 and person1 (same result)
    cout << "Total weight after person2 adds person1: " << total.getWeight() << endl;

    return 0;
}

