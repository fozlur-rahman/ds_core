#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert node
void insertNode(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// size
int sizeNodes(Node *head)
{
    int count = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
// inset head
void insertHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// insert tail
void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

// printing node
void printingNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    // d->next = NULL;

    printingNode(head);
    int pos, val;
    cin >> pos >> val;

    if (pos > sizeNodes(head))
    {
        cout << "Invalid Index";
    }
    else if (pos == 0)
    {
        insertHead(head, val);
    }
    else if (pos == sizeNodes(head))
    {
        insertTail(head, tail, val);
    }
    else
    {
        insertNode(head, pos, val);
    }

    // cout << a->val;
    printingNode(head);

    return 0;
}
