#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int print_linekd_list(Node *head)
{
    Node *tmp = head;
    int cnt=0;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        cnt++;
        tmp = tmp->next;
    }
    cout << endl;
    return cnt;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    int p = print_linekd_list(head);
    cout<<endl;
    cout<<p<<endl;
    return 0;
}
