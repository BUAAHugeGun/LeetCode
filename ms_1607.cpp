class Solution {
public:
    int maximum(int a, int b) {
        long long cha=(long long)a-b;
        cha=(cha^(cha>>63))-(cha>>63);
        return (cha+a+b)>>1;
    }
};
