#include <bits/stdc++.h>
using namespace std;

int main()
{

    // list<int> mylist2 = {1, 12, 3, 4, 1, 5};
    // int a[5] = {4, 12, 5, 4, 4};
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> mylist(v.begin(), v.end());

    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // print use range loop
    for (int element : mylist)
    {
        cout << element << " ";
    }

    return 0;
}