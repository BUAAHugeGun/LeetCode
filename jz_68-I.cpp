/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(1)
            if(((root->val>p->val)^(root->val>q->val))||root->val==p->val||root->val==q->val)return root;
            else root=root->val>p->val?root->left:root->right;
    }
};
