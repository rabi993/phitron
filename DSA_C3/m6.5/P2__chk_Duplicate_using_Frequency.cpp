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
        cout << tmp->val << " ";
        cntv++;
        tmp = tmp->next;
    }
    cout << endl;
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

    int cnt[100]={0};

    Node *tmp = head;
    while (tmp != NULL)
    {
        int value = tmp->val;
        cnt[value]++;
        tmp = tmp->next;
    }

    int p=print_linekd_list(head);


int flag=0 ;
    for(int va=0;va<100;va++){

            for(int i=0; i<p; i++){
       int value = va;
           if(cnt[value]!=0) {

            cout<<value<<" "<<":"<<" "<<cnt[value]<<endl;

            if(cnt[value] >1){
                    flag +=1;
                    break;
                }
           }
        cnt[value]=0;
   }

    if(flag==1){

            break;

        }
}

    if (flag==1){
        cout<<"YES";
    }
    else{cout<< "NO";}
    return 0;
}
