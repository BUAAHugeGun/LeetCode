class Solution {
public:
    unordered_map<int,int> mp;
    int findLucky(vector<int>& arr) {
        for(auto &x:arr)mp[x]++;
        int ans=-1;
        for(auto &v:mp)if(v.first==v.second)ans=max(ans,v.first);
        return ans;
    }
};
