
#include <bits/stdc++.h>

using namespace std;

queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;

    // Push the first 'K' elements into the stack
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    // Pop the elements from the stack and enqueue them back to the queue
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    // Enqueue the remaining elements to maintain relative order
    for (int i = 0; i < q.size() - k; i++)
    {
        q.push(q.front());
        q.pop();
    }

    return q;
}

int main()
{
    queue<int> q;
    int n, k,x;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    queue<int> result = reverseElements(q, k);

    // Print the result
    while (!result.empty())
    {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}

