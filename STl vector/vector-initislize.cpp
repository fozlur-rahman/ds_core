#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // vector<int> v(5);
    // vector<int> v(5, 10);
    // vector<int> v2(5, 15);
    // vector<int> v(v2);

    int a[4] = {10, 20, 3, 40};
    vector<int> v(a, a + 4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // cout << v;
    return 0;
}