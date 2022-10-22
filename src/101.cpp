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
    bool pd(TreeNode* a,TreeNode *b)
    {
        if(a==nullptr&&b==nullptr)return 1;
        if(a==nullptr||b==nullptr)return 0;
        if(a->val!=b->val)return 0;
        if(!pd(a->left,b->right))return 0;
        if(!pd(a->right,b->left))return 0;
        return 1;
    }
    bool isSymmetric(TreeNode* root) {
        return pd(root->left,root->right);
    }
};
