#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    CircularQueue(int n) {
        capacity = n;
        arr = new int[capacity];
        front = rear = 0; // Start both pointers at 0
        size = 0; // Initialize size to 0
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return false;
        }
        
        arr[rear] = value; // Insert value at rear
        rear = (rear + 1) % capacity; // Move rear forward circularly
        size++; // Increment size
        return true;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1; // Indicate empty queue
        }
        
        int ans = arr[front]; // Get value from front
        front = (front + 1) % capacity; // Move front forward circularly
        size--; // Decrement size
        
        return ans; // Return dequeued value
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " "; // Display elements in order
        }
        cout << endl;
    }
};

int main() {
    CircularQueue c(5); // Using a smaller capacity for testing
    c.enqueue(50);
    c.enqueue(51);
    c.enqueue(52);
    c.enqueue(53);
    c.enqueue(54);
    
    c.dequeue();
    c.dequeue();
    
    c.displayQueue(); // Should display remaining elements

    return 0;
}