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
    unordered_map<TreeNode*,int> s;
    int getsize(TreeNode* k)
    {
        if(k==NULL)return s[k]=0;
        return s[k]=1+getsize(k->left)+getsize(k->right);
    }
    int get(TreeNode* k)
    {
        if(k==NULL)return 0;
        else return s[k];
    }
    int kthLargest(TreeNode* root, int k) {
        TreeNode* x=root;
        getsize(root);
        k=s[root]-k+1;
        while(1)
        {
            int pp=get(x->left);
            if(k==pp+1)return x->val;
            else if(k<=pp)x=x->left;
            else k-=pp+1,x=x->right;
        }
        return -1;
    }
};
