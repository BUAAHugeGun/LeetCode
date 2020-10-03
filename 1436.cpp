class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mp;
        for(auto &x:paths)mp[x[0]]++,mp[x[1]]+=0;
        for(auto &x:mp)if(x.second==0)return x.first;
        return "???";
    }
};
