class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret=0;
        for(auto &x:nums)ret^=x;
        return ret;
    }
};
