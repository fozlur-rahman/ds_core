#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> a = {10, 20, 30};
    list<int> mylist = {1, 3, 4, 5, 6};
    mylist.insert(next(mylist.begin(), 2), 100);
    // mylist.insert(next(mylist.begin(), 2), a.begin(), a.end());
    // mylist.resize(3);

    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}