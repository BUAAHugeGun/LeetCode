class Solution {
public:
    int exchangeBits(int num) {
        int l=num&(0xaaaaaaaa);
        int r=num&(0x55555555);
        return (l>>1)|(r<<1);
    }
};
