class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int Max=nums.size(),temp=0;
        for(auto &x:nums)temp^=x;
        for(int i=0;i<=Max;i++)temp^=i;
        return temp;
    }
};
