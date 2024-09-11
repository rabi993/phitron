#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
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
    myStack q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    //.........................
   bool flag= true;
   if(st.size() ==q.size()){
    while (!st.empty() && !q.empty())
    {
        if(st.top()!=q.top()){
            flag= false;
            break;
        }
        st.pop();
        q.pop();
    }
   }
   else{
    flag= false;
   }
   if (flag==true){
    cout <<"YES"<<endl;
   }
   else{
    cout <<"NO"<<endl;
   }
   //...........................
    return 0;
}

