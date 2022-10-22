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
    vector<vector<long long>> sum;
    void dfs(TreeNode* x,int deep)
    {
        if(x==NULL)return;
        if(sum.size()==deep)
        {
            vector<long long> t(2);
            sum.push_back(t);
        }
        sum[deep][0]+=x->val,sum[deep][1]++;
        dfs(x->left,deep+1),dfs(x->right,deep+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        dfs(root,0);
        vector<double> ret(sum.size());
        for(int i=0;i<sum.size();i++)ret[i]=1.*sum[i][0]/sum[i][1];
        return ret;
    }
};
