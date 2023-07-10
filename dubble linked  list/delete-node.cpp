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
// delete
void delete_node(Node *head, int pos)
{
    Node *temp = head;
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
    Node *tail = b;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    prin_normal(head);
    cout << endl;
    int pos;
    cin >> pos;
    // delete_node(head, pos);
    // delete_tail(tail);
    delete_head(head);
    prin_normal(head);

    return 0;
}