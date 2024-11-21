#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int frontIndex;
    int rear;
    int size;
    int capacity;

public:
    CircularQueue(int s = 10001) {
        capacity = s;
        arr = new int[capacity];
        frontIndex = -1;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            frontIndex = 0;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = data;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[frontIndex];
        arr[frontIndex] = -1;
        frontIndex = (frontIndex + 1) % capacity;
        size--;
        if (size == 0) {
            frontIndex = -1;
            rear = -1;
        }
        return ans;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[frontIndex];
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = frontIndex;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        } while (i != (rear + 1) % capacity);
        cout << endl;
    }
};

int main() {
    CircularQueue q(5); // Custom capacity of 5 for testing
    q.enqueue(34);
    q.enqueue(64);
    q.enqueue(54);
    q.dequeue();
    cout << q.isEmpty() << endl;
    cout << q.getFront() << endl;
    q.displayQueue();  // Display the elements in the queue

    return 0;
}

