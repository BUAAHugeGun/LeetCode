class Solution {
public:
    bool hasAlternatingBits(int n) {
        int d=n&1;
        n>>=1;
        while(n)if(!(d^(n&1)))return 0;
        else d=n&1,n>>=1;
        return 1;
    }
};
