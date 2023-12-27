#include <bits/stdc++.h>
using namespace std;

void printN(list<int> &my){
cout <<"L -> ";
for (int val : my)
    {
        cout << val <<" ";
    }
cout << endl;

}

void printR(list<int> &my) {
    cout << "R -> ";
    for (auto it = my.rbegin(); it != my.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{   list<int> myList;
    int q;
    cin>>q;
    while(q!=0){
    int x, v;
    cin >> x >> v;

    if (x ==2 )
    {
        int sz = myList.size();
        if(v<sz){

        auto it = next(myList.begin(),v);
        myList.erase(it);

        }
        printN(myList);
        printR(myList);


    }
    else if (x == 0)
    {
        myList.push_front(v);
        printN(myList);
        printR(myList);

    }
     else if (x == 1)
    {
        myList.push_back(v);
        printN(myList);
        printR(myList);

    }


q--;
    }
    return 0;
}

