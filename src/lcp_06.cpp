class Solution {
public:
    int minCount(vector<int>& coins) {
        int ret=0;
        for(auto &x:coins)ret+=(x+1)/2;
        return ret;
    }
};
