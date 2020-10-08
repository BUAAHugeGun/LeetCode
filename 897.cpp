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
    vector<TreeNode*> ret;
    void dfs(TreeNode* root)
    {
        if(root==NULL)return ;
        dfs(root->left);
        ret.push_back(root);
        dfs(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        dfs(root);
        int n=ret.size();
        for(int i=0;i<n-1;i++)ret[i]->left=NULL,ret[i]->right=ret[i+1];
        ret[n-1]->left=ret[n-1]->right=NULL;
        return ret[0];
    }
};
