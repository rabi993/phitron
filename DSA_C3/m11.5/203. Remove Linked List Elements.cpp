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
    ListNode* removeElements(ListNode* head, int val) {
        //if (head == NULL) return head;
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *tmp = head;

        while (tmp != NULL)
        {
            if(tmp->val !=val){
            insert_tail(newHead, newTail, tmp->val);

            }
            tmp = tmp->next;
        }

        return newHead;
    }
};
