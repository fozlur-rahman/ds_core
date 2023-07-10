#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60};
    replace(v.begin(), v.end() - 1, 50, 700);
    for (int element : v)
    {
        cout << element << " ";
    }
    return 0;
}