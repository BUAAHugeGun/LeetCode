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
    void reverse(TreeNode* root)
    {
        if(root==NULL)return ;
        swap(root->left,root->right);
        reverse(root->left);
        reverse(root->right);
    }
    TreeNode* mirrorTree(TreeNode* root) {
        reverse(root);
        return root;
    }
};
