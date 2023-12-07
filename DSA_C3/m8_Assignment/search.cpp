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
void search_linekd_list(Node *head)
{
    Node *tmp = head;
    int x ;
    cin>>x;


    Node *tmpp = head;
    int cntt=0;
    while (tmpp != NULL)
    {
        cntt++;
        tmpp = tmpp->next;
    }

    int cnt=0;

    while (tmp != NULL)
    {
        if(x==tmp->val){
            cout<<cnt<<endl;
            break;
        }
        cnt++;
        tmp = tmp->next;

    }
    if (cnt==(cntt)){
            int k=-1;
        cout<<k<<endl;
    }



}
int main()
{
int t;
cin>>t;
for(int b; b<t;b++){
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

    search_linekd_list(head);
}
    return 0;
}

