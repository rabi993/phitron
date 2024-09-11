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
        cnt++;
        tmp = tmp->next;
    }
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
    //cout<<endl;
   // cout<<p<<endl;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2);
    }

    int q = print_linekd_list(head2);
    //cout<<endl;
    //cout<<q<<endl;
    if(p==q){
        //cout<<"YES"<<endl;

        int flag=1;

    Node *tmp = head;
     Node *tmpp = head2;
    while (tmp != NULL && tmpp != NULL)
    {
          if (tmp->val != tmpp->val)
            {
                flag=0;
                break;
            }
            if(flag==0){
                break;
            }

        tmp = tmp->next;
        tmpp = tmpp->next;
    }
   /*     for (Node *i = head ,*j = head2; i->next != NULL , j->next != NULL ; i = i->next , j = j->next)
    {
            if (i->val != j->val)
            {
                flag=0;
                break;
            }
            if(flag==0){
                break;
            }
    } */

       if(flag==0) cout<<"NO";
       else{
        cout<<"YES";
       }


    }
    else{
        cout<<"NO"<<endl;

    }
    return 0;
}
