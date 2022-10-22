class Solution {
public:
    int sum[266];
    bool CheckPermutation(string s1, string s2) {
        int ret=s1.length();
        for(auto &c:s1)sum[c]++;
        for(auto &c:s2)if(!sum[c])return 0;
        else sum[c]--,ret--;
        return !ret;
    }
};
