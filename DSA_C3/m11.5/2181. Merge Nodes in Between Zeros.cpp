class Solution {
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void delete_head(ListNode *&head)
{
    ListNode *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
    ListNode* mergeNodes(ListNode* head) {
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *tmp = head;
        int sum=0;
        while (tmp != NULL)
        {   sum +=tmp->val;
            if(tmp->val==0){
            insert_tail(newHead, newTail, sum);
            sum=0;
            }
            tmp = tmp->next;
        }
        delete_head(newHead);
        return newHead;
    }
};
