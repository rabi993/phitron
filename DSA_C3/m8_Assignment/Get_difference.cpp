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
void print_result(Node *head)
{
    Node *tmp = head;
    int chk_max = tmp->val;
    while (tmp != NULL)
    {
        if(chk_max<=tmp->val){
            chk_max=tmp->val;
        }
        tmp = tmp->next;
    }
    Node *tmpp = head;
    int chk_min = tmpp->val;
    while (tmpp != NULL)
    {
        if(chk_min >=tmpp->val){
            chk_min=tmpp->val;
        }
        tmpp = tmpp->next;
    }

     cout<<chk_max - chk_min<<endl;

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

    print_result(head);
    return 0;
}

