#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> linked_list;
    string address;

    while (cin >> address)
    {
        if (address == "end")
            break;

        linked_list.push_back(address);
    }

    int q;
    cin >> q;

    string command, visitAddress;
    auto current = linked_list.begin();

    for (int i = 0; i < q; i++)
    {
        cin >> command;

        if (command == "visit")
        {
            cin >> visitAddress;
            auto it = linked_list.begin();
            bool found = false;
            while (it != linked_list.end())
            {
                if (*it == visitAddress)
                {
                    current = it;
                    cout << *current << endl;
                    found = true;
                    break;
                }
                it++;
            }

            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "next")
        {
            ++current;
            if (current != linked_list.end())
            {
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
                current--;
            }
        }
        else if (command == "prev")
        {
            if (current != linked_list.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}