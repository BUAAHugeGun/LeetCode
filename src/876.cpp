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
    ListNode* middleNode(ListNode* head) {
        ListNode* l=head,*r=head;
        if(head->next==NULL)return head;
        while(r->next!=NULL)
        {
            l=l->next;
            r=r->next;
            if(r->next==NULL)return l;
            r=r->next;
        }
        return l;
    }
};
