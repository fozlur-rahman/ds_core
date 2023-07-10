#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 20, 30, 30, 50};
    replace(mylist.begin(), mylist.end(), 30, 300);
    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}