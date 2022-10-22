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
    unordered_set<ListNode*> st;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA!=NULL)st.insert(headA),headA=headA->next;
        while(headB!=NULL)
        {
            if(st.count(headB))return headB;
            else headB=headB->next;
        }
        return NULL;
    }
};
