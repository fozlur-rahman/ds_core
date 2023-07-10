#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> mylist = {20, 30, 20, 40, 20};
    mylist.sort();
    mylist.unique();
    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}