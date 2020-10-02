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
    TreeNode* build(int l,int r,vector<int>& nums)
    {
        if(l>r)return NULL;
        int mid=(l+r)>>1;
        TreeNode* ret=new TreeNode(nums[mid]);
        ret->left=build(l,mid-1,nums);
        ret->right=build(mid+1,r,nums);
        return ret;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(0,nums.size()-1,nums);
    }
};
