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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    if (pos == 0)
    {
        head = head->next;
        delete tmp;
        return;
    }
    for (int i=1; i<pos && tmp !=NULL; i++)
    {
        tmp =tmp->next;
    }
    if (tmp== NULL || tmp->next ==NULL)
    {
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

int t;
cin>>t;
for(int b=0; b<t;b++){
        int op,v;
        cin >> op>>v;
        if (op == 1)
        {
            insert_at_tail(head, v);
        }
        else if (op == 0)
        {
            insert_at_head(head, v);
        }
        else if (op == 2)
        {
            int pos=v;

            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        print_linked_list(head);
    }


    return 0;
}
