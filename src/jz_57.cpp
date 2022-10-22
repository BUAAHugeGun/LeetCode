class Solution {
public:
    bool bo[2000010];
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret(2);
        for(auto &x:nums)if(bo[target-x]){ret[0]=x,ret[1]=target-x;return ret;}
        else bo[x]=1;
        return ret;
    }
};
