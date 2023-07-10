#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> mylist;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mylist.push_back(val);
    }

    list<int> mylist1;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mylist1.push_back(val);
    }

    if (mylist == mylist1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}