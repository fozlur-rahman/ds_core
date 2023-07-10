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

// delete node
void deleteNodes(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *newDelete = temp->next;
    temp->next = temp->next->next;
    delete newDelete;
}
// delete head
void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

// print
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
    cout << endl;

    int pos;
    cout << "enter the delete postion for delete value" << endl;
    cin >> pos;
    if (pos > sizeNodes(head))
    {
        cout << "invalid Index" << endl;
    }
    else if (pos == 0)
    {
        deleteHead(head);
    }
    else
    {
        deleteNodes(head, pos);
    }

    printingNode(head);

    return 0;
}
