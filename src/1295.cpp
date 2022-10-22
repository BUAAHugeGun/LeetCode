class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ret=0;
        for(auto &x:nums)
        {
            string s=to_string(x);
            if((s.length()&1)==0)ret++;
        }
        return ret;
    }
};
