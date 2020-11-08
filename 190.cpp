class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret=0;
        for(int i=0;i<=31;i++)if(n&(1u<<i))ret|=(1u<<(31-i));
        return ret;
    }
};
