#include <bits/stdc++.h>
using namespace std;
int fun(int *&p)
{

    p = NULL;
    cout << &p << endl;
}
int main()
{
    int a = 10;
    int *b = &a;
    fun(b);
    cout << &b;
    return 0;
}