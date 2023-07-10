#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 30, 20, 40, 50};
    // mylist.sort();

    // reverse sort
    mylist.sort(greater<int>());

    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}