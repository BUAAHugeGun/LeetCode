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
    bool dfs(TreeNode* x,int v)
    {
        if(x==NULL)return 1;
        if(x->val!=v)return 0;
        if(!dfs(x->left,v))return 0;
        if(!dfs(x->right,v))return 0;
        return 1;
    }
    bool isUnivalTree(TreeNode* root) {
        return dfs(root,root->val);
    }
};
