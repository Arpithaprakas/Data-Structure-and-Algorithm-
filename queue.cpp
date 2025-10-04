#include <iostream>
#define n 20
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;

public:
    Queue()
    {
        arr = new int[n];
        front = rear = -1;
    }

    void enqueue(int val)
    {
        if (rear == n - 1)
        {
            cout << "Queue Overflown" << endl;
            return;
        }
        arr[++rear] = val;
        cout << arr[rear] << " pushed successfully" << endl;
        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflown" << endl;
            return;
        }
        cout << arr[front] << " deleted successfully" << endl;
        front++;
    }

    void print()
    {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(40);
    q.enqueue(30);
    q.print();
    q.dequeue();
    q.print();
    return 0;
}