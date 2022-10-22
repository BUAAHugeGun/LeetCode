class Solution {
public:
    int sum[10010];
    unordered_map<int,int> mp;
    int countLargestGroup(int n) {
        for(int i=1;i<=n;i++)sum[i]=sum[i/10]+i%10,mp[sum[i]]++;
        int Max=0,ans=0;
        for(auto &v:mp)Max=max(Max,v.second);
        for(auto &v:mp)if(v.second==Max)ans++;
        return ans;
    }
};
