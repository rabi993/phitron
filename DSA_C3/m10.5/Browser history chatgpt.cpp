#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<string> myList;
    string v;

    // Input values until "end" is encountered
    while (cin >> v && v != "end")
    {
        myList.push_back(v);
    }

    for (string val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    int q;
    cin >> q;
    int c = 0; // Initialize the position counter

    while (q != 0)
    {
        int sz = myList.size();
        string x;
        cin >> x;

        if (x == "visit")
        {
            string ad;
            cin >> ad;
            int position = 0;

            for (auto it = myList.begin(); it != myList.end(); ++it, ++position)
            {
                if (*it == ad)
                {
                    cout << *it << endl;
                    c = position;
                    break;
                }
            }

            if (c == sz)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (x == "next")
        {
            int p = c + 1;
            if (p < sz)
            {
                auto it = next(myList.begin(), p);
                cout << *it << endl;
                c = p;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (x == "prev")
        {
            int p = c - 1;
            if (p >= 0)
            {
                auto it = next(myList.begin(), p);
                cout << *it << endl;
                c = p;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        q--;
    }

    return 0;
}
