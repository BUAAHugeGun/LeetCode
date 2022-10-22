class Solution {
public:
    unordered_set<int> st;
    int distributeCandies(vector<int>& candies) {
        for(auto &x:candies)st.insert(x);
        return min(candies.size()>>1,st.size());
    }
};
