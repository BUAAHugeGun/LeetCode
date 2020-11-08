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
    TreeNode* dfs(TreeNode* k,TreeNode* fa)
    {
        if(k==NULL)return NULL;
        if(k->right==NULL)
        {
            k->right=fa;
            return k->left==NULL?k:dfs(k->left,k);
        }
        k->right=dfs(k->right,fa);
        return k->left==NULL?k:dfs(k->left,k);
    }
    TreeNode* convertBiNode(TreeNode* root) {
        TreeNode* temp=dfs(root,NULL);
        TreeNode *tt=temp;
        while(temp)temp->left=NULL,temp=temp->right;
        return tt;
    }
};
