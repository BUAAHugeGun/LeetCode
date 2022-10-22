class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int Max=0;
        vector<bool> ret;
        for(auto &x: candies)Max=max(Max,x);
        for(int i=0;i<candies.size();i++)
        {
            ret.push_back(candies[i]+extraCandies>=Max?1:0);
        }
        return ret;
    }
};
