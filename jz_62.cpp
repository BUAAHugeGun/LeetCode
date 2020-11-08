class Solution {
public:
    int lastRemaining(int n, int m) {
        int ret=0;
        for(int i=1;i<=n;i++)(ret+=m)%=i;
        return ret;
    }
};
