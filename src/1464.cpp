class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int Max=1,ret=0;
        for(auto &x:nums)
        {
            ret=max(ret,(x-1)*(Max-1));
            Max=max(Max,x);
        }
        return ret;
    }
};
