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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode* ret=new ListNode(l2->val-1);
        ret->next=l1;
        ListNode *pre=ret;
        while(l2!=NULL)
        {
            while(l1!=NULL&&l1->val<=l2->val)pre=l1,l1=l1->next;
            cout<<pre->val<<" "<<l2->val<<"\n";
            ListNode* nxt=l2->next;
            l2->next=pre->next;
            pre->next=l2;
            pre=l2;
            l2=nxt;
        }
        return ret->next;
    }
};
