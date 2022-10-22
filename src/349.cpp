class Solution {
public:
    unordered_map<int,bool> mp;
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        for(auto &x:nums1)mp[x]=1;
        for(auto &x:nums2)if(mp[x]==1)ret.push_back(x),mp[x]=0;
        return ret;
    }
};
