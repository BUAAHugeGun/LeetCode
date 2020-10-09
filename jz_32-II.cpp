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
    vector<vector<int>> ret;
    void dfs(TreeNode* x,int t)
    {
        if(x==NULL)return;
        if(ret.size()==t)
        {
            vector<int> v;
            ret.push_back(v);
        }
        ret[t].push_back(x->val);
        dfs(x->left,t+1),dfs(x->right,t+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root,0);
        return ret;
    }
};
