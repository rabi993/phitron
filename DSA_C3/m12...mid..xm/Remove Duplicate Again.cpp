#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList;
    int v;
    while(cin>>v && v!= -1){

        myList.push_back(v);
    }

    myList.sort();
    myList.unique();

    for (int val : myList){

        cout << val << " ";
    }
    cout << endl;

    return 0;
}
