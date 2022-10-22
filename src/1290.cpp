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
    int getDecimalValue(ListNode* head) {
        int ret=head->val;
        while(head->next!=NULL)head=head->next,ret=(ret<<1)|head->val;
        return ret;
    }
};
