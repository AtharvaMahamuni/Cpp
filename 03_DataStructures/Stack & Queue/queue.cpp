#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int num)
{
    if (rear == 4)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front++;
        }
        rear++;
        queue[rear] = num;
    }
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        cout << queue[front] << " dequeued" << endl;
        front++;
    }
    if (front > rear)
    {
        front = rear = -1;
    }
}

void traverse()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
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

    traverse();

    dequeue();
    dequeue();
    dequeue();
    dequeue();

    traverse();

    dequeue();
    dequeue();

    return 0;
}