#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int marks;
    Student(string name, int marks)
    {
        this->marks = marks;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.marks < b.marks)
            return true;
        else if(a.marks > b.marks)
            return false;
        else
        {
            return false;
        }
    }
};
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for(int i = 0; i < t; i++) {
        string sentence;
        getline(cin, sentence);
        string name;
        stringstream ss(sentence);
        map<string, int> mp;
        priority_queue<Student, vector<Student>, cmp> pq;

        while(ss >> name) {
            mp[name]++;

            int  marks= mp[name];
            Student obj(name,  marks);
            pq.push(obj);
        }
    cout<< pq.top().name << " " << pq.top().marks << endl;

    }
    return 0;
}

