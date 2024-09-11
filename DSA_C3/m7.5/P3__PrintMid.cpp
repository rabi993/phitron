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
    int cntv=0;
    while (tmp != NULL)
    {
        //cout << tmp->val << " ";
        cntv++;
        tmp = tmp->next;
    }
    //cout << endl;
    return cntv;
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

    int p=print_linekd_list(head);

    if(p%2!=0){
       int mid=p/2;
    Node *tmp = head;
    for (int i = 1; i <= mid+1 ; i++)
    {

        if(i==mid+1){
            cout<<tmp->val<<endl;
        }
        tmp = tmp->next;
    }
    }
    else{
        int mid=p/2;
        Node *tmp = head;
    for (int i = 1; i <= mid+1 ; i++)
    {
        if(i==mid){
            cout<<tmp->val<<" ";
        }
        if(i==mid+1){
            cout<<tmp->val<<endl;
        }
        tmp = tmp->next;
    }
    }
    return 0;
}
