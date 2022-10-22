class Solution {
public:
    bool bo[258];
    int numJewelsInStones(string J, string S) {
        for(auto x: J)
            bo[x]=1;
        int ret=0;
        for(auto x:S)ret+=bo[x];
        return ret;
    }
};
