class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret;
        ret.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            ret.push_back(nums[i]+ret[i-1]);
        }
        return ret;
    }
};
