#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 30, 20, 40, 50};

    mylist.remove(10);
    mylist.reverse();
    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}