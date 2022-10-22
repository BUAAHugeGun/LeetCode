class Solution {
public:
    bool bo[10010];
    int repeatedNTimes(vector<int>& A) {
        for(auto &x:A)if(bo[x])return x;
        else bo[x]=1;
        return 0;
    }
};
