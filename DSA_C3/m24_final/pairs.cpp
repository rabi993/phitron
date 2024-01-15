#include <bits/stdc++.h>
using namespace std;

class Abc
{
public:
    string name;
    long long int marks;
    Abc(string name, long long int marks)
    {
        this->marks = marks;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(Abc a, Abc b)
    {
        if(a.name > b.name)
            return true;
        else if(a.name < b.name)
            return false;
        else
        {
            if(a.marks < b.marks)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin>> n;
    priority_queue<Abc, vector<Abc>, cmp> pq;
    for(int i = 0; i < n; i++)
    {
        string name;
        long long int marks;
        cin>> name >> marks;
        Abc obj(name, marks);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout<< pq.top().name << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
