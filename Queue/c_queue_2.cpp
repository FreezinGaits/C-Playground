#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    CircularQueue(int n) {
        capacity = n;
        arr = new int[capacity];
        front = rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == capacity - 1) || (rear == (front - 1) % capacity);
    }

    bool isEmpty() {
        return front == -1;
    }

    bool enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return false;
        } else if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        arr[rear] = value;
        return true;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        return ans;
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        } else {
            for (int i = front; i < capacity; i++) {
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << arr[i] << " ";
            }
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
    c.displayQueue();

    return 0;
}
