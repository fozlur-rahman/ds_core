#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // // or use the rang base loop
    // for (int element : v)
    // {
    //     cout << element << " ";
    // }

    // second type
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int element : v)
    {
        cout << element << " ";
    }

    return 0;
}