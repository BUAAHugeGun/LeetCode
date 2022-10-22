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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* a=head,*b=head;
        for(int i=1;i<k;i++)a=a->next;
        while(a->next!=NULL)a=a->next,b=b->next;
        return b;
    }
};
