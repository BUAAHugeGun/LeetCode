class Solution {
public:
    int hammingWeight(long long n) {
        int ret=0;
        while(n)n^=(n&(-n)),ret++;
        return ret;
    }
};
