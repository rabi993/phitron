class Solution {
public:
    int size(ListNode *head)
{
    ListNode *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void delete_from_position(ListNode *head, int pos)
{
    ListNode *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    ListNode *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(ListNode *&head)
{
    ListNode *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       // if (head == NULL) return head;

        int sz = size(head);
        int pos =sz-n;



        if (pos == 0)
            {
                delete_head(head);
            }
        else
            {
                delete_from_position(head, pos);
            }


    return head;
    }
};
