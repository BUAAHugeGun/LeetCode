class Solution {
public:
    bool bo[100010];
    int findRepeatNumber(vector<int>& nums) {
        for(auto &x:nums)if(bo[x])return x;
        else bo[x]=1;
        return 0;
    }
};
