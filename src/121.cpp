class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min=100000,ans=0;
        for(auto x:prices)
        {
            ans=max(ans,x-Min);
            Min=min(Min,x);
        }
        return ans;
    }
};
