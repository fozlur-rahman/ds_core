#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 20, 34, 50, 60};
    auto it = find(mylist.begin(), mylist.end(), 20);
    if (it == mylist.end())
    {
        cout << "not fount";
    }
    else
    {
        cout << "find : " << *it;
    }
    return 0;
}