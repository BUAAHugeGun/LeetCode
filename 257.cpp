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
    vector<string> ans;
    void dfs(TreeNode* k,string t)
    {
        if(!k)return;
        t+="->"+to_string(k->val);
        if(!k->left&&!k->right)ans.push_back(t.substr(2));
        else dfs(k->left,t),dfs(k->right,t);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,"");
        return ans;
    }
};
