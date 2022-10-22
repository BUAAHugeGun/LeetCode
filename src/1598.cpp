class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(auto &s:logs)
            if(s=="../")ans=max(0,ans-1);
            else if(s=="./")continue;
            else ans++;
        return ans;
    }
};
