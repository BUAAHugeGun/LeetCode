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
    int dfs(TreeNode *x)
    {
        if(x==nullptr)return 0;
        int d1=dfs(x->left);
        int d2=dfs(x->right);
        if(d1==-1||d2==-1||(abs(d1-d2)>1))return -1;
        return max(d1,d2)+1;
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root)==-1?0:1;
    }
};
