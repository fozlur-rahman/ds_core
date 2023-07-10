#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist = {1, 2, 3, 5, 6, 60};
    mylist.resize(4);
    mylist.clear();

    for (int value : mylist)
    {
        cout << value << " ";
    }

    return 0;
}