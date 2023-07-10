#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> a = {1, 20, 30, 40, 50};
    auto it = next(a.begin(), 2);
    cout << *it;
    return 0;
}