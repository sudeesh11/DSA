#include <iostream>
using namespace std;
#define max 10

int que[max];
int front = -1;
int rear = -1;

void enqueue(int n)
{
    if ((rear + 1) % max == front)
    {
        cout << "Queue Overflow" << endl;
    }

    else
    {
        if (front == -1)
        {
            front++;
        }
        rear = (rear + 1) % max;
        que[rear] = n;
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
        cout << que[front] << " removed from the queue" << endl;
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % max;
        }
    }
}

void peek()
{
    if (front == -1)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        cout << "Front element is " << que[front] << endl;
    }
}
void show()
{
    if (front == -1)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        cout << "Queue: ";
        int i = front;
        while (true)
        {
            cout << que[i] << " ";
            if (i == rear)
            {
                break;
            }
            i = (i + 1) % max;
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    show();
    dequeue();
    show();
    peek();
    enqueue(15);
    show();

    return 0;
}
