#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int num)
{
    if (front == (rear + 1) % 5)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = (front + 1) % 5;
        }
        rear = (rear + 1) % 5;

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
        cout << queue[front] << " Dequeued" << endl;
        front = (front + 1) % 5;

        if (front == (rear + 1) % 5)
        {
            front = rear = -1;
        }
    }
}

void traverse()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        int i = 0;
        while ((i + 1) % (5 + 1))
        {
            cout << queue[i] << " ";
            i++;
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

    traverse();

    enqueue(60);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    traverse();

    return 0;
}