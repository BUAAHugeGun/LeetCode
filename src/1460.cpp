class Solution {
public:
    int sum[1111];
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for(auto &x:target)sum[x]++;
        for(auto &x:arr)sum[x]--;
        for(int i=1;i<=1000;i++)if(sum[i])return 0;
        return 1;
    }
};
