class Solution {
public:
    int hammingWeight(long long n) {
        int ret=0;
        while(n)ret++,n^=(n&(-n));
        return ret;
    }
};
