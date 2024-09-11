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
    ListNode* swapNodes(ListNode* head, int k) {
        int sz = size(head);
        int endp =sz-k+1;
        ListNode *tmp =head;
        ListNode *tmpp =head;
        for(int i=1; i<=k;i++){

            if(i==k){
                for(int j=1;j<=endp;j++){
                    if(j==endp){
                        swap(tmp->val,tmpp->val);
                        break;
                    }
                    tmpp =tmpp->next;

                }
            }
            tmp =tmp->next;
        }
        return head;
    }
};
