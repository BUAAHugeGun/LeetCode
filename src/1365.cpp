class Solution {
public:
    int sum[111];
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        for(auto &x:nums)sum[x]++;
        for(int i=1;i<=100;i++)sum[i]+=sum[i-1];
        vector<int> ret(nums.size());
        for(int i=0;i<nums.size();i++)ret[i]=nums[i]>0?sum[nums[i]-1]:0;
        return ret;
    }
};
