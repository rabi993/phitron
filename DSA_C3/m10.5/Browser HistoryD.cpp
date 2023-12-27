#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_tail(Node *&head, Node *&tail, string value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
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
    string value;
    while (true)
    {
        cin >> value;
        if (value == "end")
            break;
        insert_tail(head, tail, value);
    }
    int q;
    cin>>q;
    while(q!=0){
    Node *tmp = head;
    string x;
    cin>>x;
    if (x=="visit"){
        string ad;
        cin>> ad;
        while (tmp != NULL)
        {
            if(tmp->value==ad){
                cout<<tmp->value<<endl;
                break;
            }
            tmp = tmp->next;
        }
         cout<<"Not Available"<<endl;
         tmp = head;
    }







            //print_normal(head);
            //print_reverse(tail);


q--;
    }
    return 0;
}
