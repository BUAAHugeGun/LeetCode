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
    vector<int> reversePrint(ListNode* head) {
        vector<int> ret;
        while(head!=NULL)ret.push_back(head->val),head=head->next;
        reverse(ret.begin(),ret.end());
        return ret;
    }
};
