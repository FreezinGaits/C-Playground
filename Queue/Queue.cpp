#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int frontIndex;
    int rear;
    int size;

public:
    Queue()
    {
        size = 10001;
        arr = new int[size];
        frontIndex = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        return frontIndex == rear;
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (frontIndex == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[frontIndex];
            arr[frontIndex] = -1;
            frontIndex++;
            if (frontIndex == rear)
            {
                frontIndex = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int getFront()
    {
        if (frontIndex == rear)
        {
            return -1;
        }
        else
        {
            return arr[frontIndex];
        }
    }

    void displayQueue()
    {
        if (frontIndex == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue elements: ";
            for (int i = frontIndex; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(34);
    q.enqueue(64);
    q.enqueue(54);
    q.dequeue();
    cout << q.isEmpty() << endl;
    cout << q.getFront() << endl;
    q.displayQueue(); // Display the elements in the queue

    return 0;
}
