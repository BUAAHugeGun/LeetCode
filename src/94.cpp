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
    void dfs(TreeNode *x, vector<int> &v)
    {
        if(x==nullptr)return;
        dfs(x->left,v);
        v.push_back(x->val);
        dfs(x->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        dfs(root,ret);
        return ret;
    }
};
