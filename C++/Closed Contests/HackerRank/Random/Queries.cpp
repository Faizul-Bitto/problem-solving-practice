#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;

    if (tail == NULL)
    {
        tail = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void deleteAtIndex(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
    {
        return;
    }

    if (index == 0)
    {
        Node *del = head;
        head = head->next;

        if (head == NULL)
            tail = NULL;

        delete del;
        return;
    }

    Node *temp = head;

    for (int i = 1; i < index && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *del = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL)
    {
        tail = temp;
    }

    delete del;
}

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insertAtHead(head, tail, V);
        }
        else if (X == 1)
        {
            insertAtTail(head, tail, V);
        }
        else if (X == 2)
        {
            deleteAtIndex(head, tail, V);
        }

        printLinkedList(head);
    }

    return 0;
}
