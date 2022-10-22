class Solution {
public:
    int sum[1000010];
    int expectNumber(vector<int>& scores) {
        int ret=0;
        for(auto &x:scores)ret+=!sum[x],sum[x]++;
        return ret;
    }
};
