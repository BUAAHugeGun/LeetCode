class Solution {
public:
    int findComplement(int num) {
        int x=num^(0xffffffff);
        uint32_t temp=1u<<31;
        while(!(num&temp))x^=temp,temp>>=1;
        return x;
    }
};
