#include <iostream>
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
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

Node *reverse(Node *head)
{
    Node *cur = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    return prev;
}

bool is_palindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *tmp = head;
    Node *tmp2 = reverse(slow);

    while (tmp2 != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    return true;
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

    if (is_palindrome(head))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}