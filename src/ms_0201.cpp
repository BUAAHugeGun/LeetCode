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
    bool bo[20020];
    ListNode* removeDuplicateNodes(ListNode* head) {
        if(head==NULL)return head;
        ListNode* shang=head,*root=head;
        bo[head->val]=1;
        head=head->next;
        while(head!=NULL)
        {
            if(bo[head->val])
                shang->next=head->next;
            else 
                bo[head->val]=1,shang=head;
            head=head->next;
        }
        return root;
    }
};
