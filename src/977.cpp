class Solution {
public:
    int sum[10010];
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ret(A.size());
        for(auto &x:A)sum[abs(x)]++;
        int tot=0;
        for(int i=0;i<=10000;i++)while(sum[i])ret[tot++]=i*i,sum[i]--;
        return ret;
    }
};
