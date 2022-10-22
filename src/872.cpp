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
    vector<int> a;
    bool bo=1;
    void dfs(TreeNode* k)
    {
        if(!k)return;
        if(k->left||k->right)dfs(k->left),dfs(k->right);
        else a.push_back(k->val);
    }
    void dfs(TreeNode* k,int &tot)
    {
        if(!k)return;
        if(k->left||k->right)dfs(k->left,tot),dfs(k->right,tot);
        else 
            if(a.size()>tot&&a[tot]!=k->val)bo=0;
            else tot++;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        int tot=0;
        dfs(root1);
        dfs(root2,tot);
        return bo&&tot==a.size();
    }
};
