#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<string> s;
    // for (int i = 0; i < n; i++)
    // {
    //     string x;
    //     cin >> x;
    //     s.push_back(x);
    // }
    // for (string val : s)
    // {
    //     cout << val << " ";
    // }
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
        }
    for (string val : s)
    {
        cout << val << endl;
    }

    return 0;
}