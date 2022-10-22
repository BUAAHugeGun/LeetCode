class Solution {
public:
    int numberOfSteps (int num) {
        int ret=0;
        while(num)
            if(num&1)ret+=2,num>>=1;
            else ret++,num>>=1;
        return max(ret-1,0);
    }
};
