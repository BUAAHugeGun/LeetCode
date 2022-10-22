/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)return 0;
        ListNode *a=head,*b=head;
        while(1)
        {
            if(b->next==NULL||b->next->next==NULL||a->next==NULL)return 0;
            b=b->next->next;
            a=a->next;
            if(a==b)return 1;
        }
    }
};
