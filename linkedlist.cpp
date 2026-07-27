#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = tail = NULL;
    }

    void displayLinkedlist()
    {
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertFront(int value)
    {
        node *newnode = new node(value);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            return;
        }
    }

    void insertBack(int value)
    {
        node *newnode = new node(value);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            return;
        }
    }

    void insertAtPosition(int value, int position)
    {
        if (position < 0)
        {
            cout << "Invalid position to insert! \n";
            return;
        }
        if (position == 0)
        {
            insertFront(value);
            return;
        }
        node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid position to insert! \n";
            }
            temp = temp->next;
        }

        node *newNode = new node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFront()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty! " << endl;
            return;
        }

        node *temp = head;
        head = head->next;
        temp = NULL;
        delete temp;
    }

    void deleteBack()
    {
        if (head == NULL)
        {
            cout << " Linked list is empty! " << endl;
            return;
        }

        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void deleteAtPosition(int position)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty! \n";
            return;
        }
        if (position < 0)
        {
            cout << "Invalid position! \n";
            return;
        }
        if (position == 0)
        {
            deleteFront();
            return;
        }

        node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position to insert!";
            }
            temp = temp->next;
        }
        node *newNode = temp->next;
        temp->next = newNode->next;
        if (newNode == tail)
        {
            tail = temp;
        }
        delete newNode;
    }
};

int main()
{
    list ll;
    ll.insertFront(1);
    ll.insertFront(2);
    ll.insertFront(3);
    ll.insertBack(5);
    ll.displayLinkedlist();
    ll.deleteFront();
    ll.displayLinkedlist();
    ll.insertAtPosition(4, 2);
    ll.displayLinkedlist();
    ll.deleteBack();
    ll.displayLinkedlist();
    ll.deleteAtPosition(1);
    ll.displayLinkedlist();
    return 0;
}