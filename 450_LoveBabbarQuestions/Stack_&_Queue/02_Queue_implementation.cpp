#include <iostream>
using namespace std;

int queue[5];
int front = -1, rear = -1;

void enqueue(int n)
{
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[front] = n;
        cout << n << " is enqueued" << endl;
    }
    else if (rear < 4)
    {
        rear++;
        queue[rear] = n;
        cout << n << " is enqueued" << endl;
    }
    else
    {
        cout << "Queue is Overflow !!!" << endl;
    }
}

int dequeue()
{
    int n;

    if (front == -1 && rear == -1)
    {
        cout << "Queue Underflow !!!";
    }
    else if (front == rear)
    {
        n = queue[front];
        front = -1;
        rear = -1;
        cout << n << " is dequeued" << endl;
    }
    else
    {
        n = queue[front];
        front++;
        cout << n << " is dequeued" << endl;
    }

    return n;
}

void traverse()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty !!!" << endl;
    }
    else
    {
        cout << "Elements in Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);

    traverse();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}