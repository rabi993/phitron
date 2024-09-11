#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector< int> &v, long long int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while(cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if(v[parent_idx] > v[cur_idx])
        {

            swap(v[parent_idx], v[cur_idx]);
        }

        else
        {
            break;
        }

        cur_idx = parent_idx;
    }
}
void delete_heap(vector<int> &v) {
    if (v.empty()) {

        return;
    }

    if (v.size() == 1) {
        v.pop_back();
        return;
    }
            v[0] = v[v.size() - 1];
            v.pop_back();
            int cur = 0;
            while(true)
            {
                int left_idx = cur * 2 + 1;
                int right_idx = cur * 2 + 2;
                int last_idx = v.size() - 1;
                if (left_idx <= last_idx && right_idx <= last_idx)
                {

                    if(v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
                    {
                        swap(v[left_idx], v[cur]);
                        cur = left_idx;
                    }
                    else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
                    {
                        swap(v[right_idx], v[cur]);
                        cur = right_idx;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(left_idx <= last_idx)
                {

                    if(v[left_idx] < v[cur])
                    {
                        swap(v[left_idx], v[cur]);
                        cur = left_idx;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(right_idx <= last_idx)
                {

                    if(v[right_idx] < v[cur])
                    {
                        swap(v[right_idx], v[cur]);
                        cur = right_idx;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }


}

int main()
{
    int n;
    cin >> n;
    vector< int> v;
    for(int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        insert_heap(v, x);
    }

    //print_heap(v);

    int t;
    cin>> t;

    for(int i=0; i<t; i++) {
        int c;
        cin >> c;
        if(c == 0)
        {
            long long int p;
            cin >> p;
            insert_heap(v, p);
            cout<< v.front() <<endl;
        }
        else if(c == 1)
        {
            if(v.empty())
                {
                    cout << "Empty" << endl;

                }
            else{
               cout<< v.front()  << endl;
            }
        }
        else if(c == 2)
            {
                delete_heap(v);
                if (!v.empty()) {
                cout << v.front() << endl;
            }
            else {
                cout << "Empty" << endl;
            }
            }

    }
    return 0;
}


