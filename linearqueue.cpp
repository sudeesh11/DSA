#include <iostream>
using namespace std;
#define max 10

int que[max];
int front = -1;
int rear = -1;

void enqueue(int n)
{
    if (rear == max - 1)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        if (front == -1){
            front = 0;
        }
        rear++;
        que[rear] = n;
        cout << que[rear] << " added to the queue" << endl;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {

        cout << que[front] << " removed from the queue" << endl;
        front++;
    }
}
void peek()
{
    if (front == -1 || front > rear)
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
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        cout << "Queue ";
        for (int i = front; i <= rear; i++)
        {
            cout << que[i] << " ";
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