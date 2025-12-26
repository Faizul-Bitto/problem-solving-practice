#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long value;
    Node *next;

    Node(long long value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insertValueAtTail(Node *&head, Node *&tail, long long value)
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

long long getDifference(Node *head)
{
    Node *temp = head;

    long long minimum = temp->value;
    long long maximum = temp->value;

    while (temp != NULL)
    {
        minimum = min(minimum, temp->value);
        maximum = max(maximum, temp->value);
        temp = temp->next;
    }

    return maximum - minimum;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    long long value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        insertValueAtTail(head, tail, value);
    }

    cout << getDifference(head);
    
    return 0;
}
