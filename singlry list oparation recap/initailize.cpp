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
int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);
    Node *c = new Node(310);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}