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

// insert
void insert_val(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    newNode->prev = newNode;
    tail = tail->next;
}

// print
void print_node(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_val1(Node *&head1, Node *&tail1, int val1)
{
    Node *newNode = new Node(val1);
    if (head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
    }

    tail1->next = newNode;
    newNode->prev = newNode;
    tail1 = tail1->next;
}

// print
void print_node1(Node *head1)
{
    Node *temp = head1;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void is_equal(Node *&head, Node *&head1)
{
    while (head != NULL && head1 != NULL)
    {
        if (head->val != head1->val)
        {
            cout << "NO";
            return;
        }
        head = head->next;
        head1 = head1->next;
    }

    if (head == NULL && head1 == NULL)
        cout << "YES";
    else
        cout << "NO";
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
            break;

        insert_val(head, tail, val);
    }
    print_node(head);
    cout << endl;

    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;

        insert_val1(head1, tail1, val1);
    }
    is_equal(head, head1);
    print_node1(head1);

    return 0;
}