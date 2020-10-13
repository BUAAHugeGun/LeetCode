/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    const int mod=1e9+7;
    void dfs(TreeNode* x,int t)
    {
        if(!x)return;
        t=((t<<1)+x->val)%mod;
        if(!x->left&&!x->right)(ans+=t)%=mod;
        dfs(x->left,t),dfs(x->right,t);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};
