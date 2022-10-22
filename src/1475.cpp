class Solution {
public:
    int sta[555],top=0;
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size();i++)
        {
            while(top&&prices[sta[top]]>=prices[i])prices[sta[top]]-=prices[i],top--;
            sta[++top]=i;
        }
        return prices;
    }
};
