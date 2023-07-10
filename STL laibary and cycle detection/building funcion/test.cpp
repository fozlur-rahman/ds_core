#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist = {1, 2, 3, 4, 5};

    auto it = next(mylist.begin(), 2); // Get iterator pointing to index 2
    mylist.insert(it, 100);            // Insert 100 at the position pointed to by the iterator

    for (int val : mylist)
    {
        cout << val << " "; // Print the elements of the modified list
    }

    return 0;
}