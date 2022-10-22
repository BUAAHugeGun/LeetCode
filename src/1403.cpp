class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp=0,tot=0;
        for(auto &x:nums)tot+=x;
        vector<int> ret;
        for(int i=nums.size()-1;i>=0;i--)
        {
            temp+=nums[i];
            ret.push_back(nums[i]);
            if(temp*2>tot)
                return ret;
        }
        return ret;
    }
};
