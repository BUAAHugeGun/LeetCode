class Solution {
public:
    int hammingDistance(int x, int y) {
        x^=y;
        int ret=0;
        while(x)ret++,x-=x&(-x);
        return ret;
    }
};
