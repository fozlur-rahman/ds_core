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
// delete position
void delete_position(Node *Head, int pos)
{
    Node *temp = Head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

// delete tail
void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

// delete head
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
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
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    prin_normal(head);
    cout << endl;
    int pos;
    cin >> pos;
    if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos < size_nodes(head) && pos > 0)
    {
        delete_position(head, pos);
    }
    else
    { 
        delete_tail(tail);
    }

    prin_normal(head);

    return 0;
}