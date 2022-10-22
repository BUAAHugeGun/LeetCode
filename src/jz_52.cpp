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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA,*b=headB;
        if(!a||!b)return NULL;
        int tot=0;
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
            if(!headA)
            {
                headA=b;
                if(!tot)tot=1;
                else return NULL;
            }
            if(!headB)headB=a;
        }
        return headB;
    }
};
