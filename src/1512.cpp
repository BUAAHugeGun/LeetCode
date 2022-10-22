class Solution {
public:
    int sum[111];
    int numIdenticalPairs(vector<int>& nums) {
        int ret=0;
        for(int i=0;i<nums.size();i++)
        {
            ret+=sum[nums[i]];
            sum[nums[i]]++;
        }
        return ret;
    }
};
