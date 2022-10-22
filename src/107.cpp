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
        if(!x)return ;
        if(ret.size()==t)
        {
            vector<int> temp;
            ret.push_back(temp);
        }
        ret[t].push_back(x->val);
        dfs(x->left,t+1);
        dfs(x->right,t+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        dfs(root,0);
        reverse(ret.begin(),ret.end());
        return ret;
    }
};
