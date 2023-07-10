#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    v.push_back(60);
    v.pop_back();
    vector<int> v2 = {60, 70};
    v.insert(v.begin() + v.size(), v2.begin(), v2.end());
    v.erase(v.begin() + v.size() - 2, v.begin() + v.size());
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}