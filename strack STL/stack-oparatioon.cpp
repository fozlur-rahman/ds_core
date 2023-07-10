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

    // for accessing top value;
    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool emty()
    {
        if (v.size() == 0)
            return true;
        return false;
    }
};

int main()
{

    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top();

    return 0;
}