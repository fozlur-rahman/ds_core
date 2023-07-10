#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(34);
    v.push_back(34);
    v.push_back(23);
    v.resize(2);
    v.resize(4, 10);
    v.clear();
    // cout << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}