class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long Min=0;
        long long sum=0;
        long long ans=-2147483647LL;
        for(auto x:nums)
        {
            sum+=x;
            ans=max(ans,sum-Min);
            Min=min(Min,sum);
        }
        return ans;
    }
};
