#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// size
int size_nodes(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void insert_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

// insert head
void insert_head(Node *&head, int pos, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
// insert tail
void insert_tail(Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

// print
void prin_normal(Node *head)
{
    Node *temp = head;
    while (temp != 0)
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
    Node *tail = b;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    prin_normal(head);
    cout << endl;
    int pos, val;
    cin >> pos >> val;

    if (pos > size_nodes(head))
    {
        cout << "invalid" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, pos, val);
    }
    else if (pos == size_nodes(head))
    {
        insert_tail(tail, pos, val);
    }
    else
    {
        insert_position(head, pos, val);
    }

    prin_normal(head);

    return 0;
}