#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    bool flag = false;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x == a[mid])
        {
            flag = true;
            break;
        }
        if (x > a[mid])
        {
            l = a[mid] + 1;
        }
        else
        {
            r = a[mid] - 1;
        }
    }
    if (flag = true)
        cout << "yes" << endl;
    else
        cout << "no";
    return 0;
}