#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    // for access value
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
            return true;
        return false;
    }
};
int main()
{

    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}