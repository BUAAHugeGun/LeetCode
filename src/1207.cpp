class Solution {
public:
    unordered_map<int,int> mp;
    int bo[1010];
    bool uniqueOccurrences(vector<int>& arr) {
        for(auto &x:arr)mp[x]++;
        for(auto &v:mp)if(bo[v.second])return 0;
            else bo[v.second]=1;
        return 1;
    }
};
