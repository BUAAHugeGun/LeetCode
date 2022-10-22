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
    TreeNode* build(vector<int>& nums,int l,int r)
    {
        if(l>r)return NULL;
        int mid=(l+r)>>1;
        TreeNode* ret=new TreeNode(nums[mid]);
        ret->left=build(nums,l,mid-1);
        ret->right=build(nums,mid+1,r);
        return ret;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }
};
