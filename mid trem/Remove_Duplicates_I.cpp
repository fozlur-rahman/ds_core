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

void insert_node(Node *&head, Node *&tail, int val)
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

void duplicate_node(Node *&head)
{
    if (head == NULL)
        return;

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            tmp->next = tmp->next->next;
        }
        else if (tmp->val != tmp->next->val)
        {
            tmp = tmp->next;
        }
    }
}
void print_node(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_node(head, tail, val);
    }
    
    // sort
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    duplicate_node(head);
    print_node(head);
    return 0;
}