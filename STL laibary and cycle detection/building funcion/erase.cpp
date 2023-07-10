#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 20, 34, 50, 60};
    mylist.erase(next(mylist.begin(), 2));
    for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}