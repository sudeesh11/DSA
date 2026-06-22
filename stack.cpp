#include <iostream>
using namespace std;
#define max 10

int sta[max];
int top = -1;

void push(int n)
{
    if (top == max - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        sta[top] = n;
        cout << sta[top] << " added to the stack" << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << sta[top] << " removed from the stack" << endl;
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << "Top element is " << sta[top] << endl;
    }
}

void show()
{
    cout << "Stack ";
    for (int i = 0; i <= top; i++)
    {
        cout << sta[i] << " ";
    }
    cout << "\n";
}

int main()
{
    push(10);
    push(20);
    push(30);
    show();
    pop();
    show();
    peek();
    return 0;
}
