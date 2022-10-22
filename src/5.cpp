class Solution {
public:
    string longestPalindrome(string s) {
        string t;
        for(auto c:s)t+=c,t+="#";
        int Max=0, mMax=0,ans=1,o=1;
        vector<int> rr;
        rr.push_back(1);
        for(int i=1;i<t.length();i++)
        {
            int r=0;
            if(i<=Max)
                r=min(rr[mMax-(i-mMax)],Max-i+1);
            else 
                r=1;
            while(i>=r&&i+r<t.length()&&t[i-r]==t[i+r])r++;
            if(i+r-1>Max)
            {
                Max=i+r-1;
                mMax=i;
            }
            int len=(t[i]=='#'?r/2*2:(r+1)/2*2-1);
            if(len>ans)
            {
                ans=len,o=i;
            }
            // cout<<i<<" "<<Max<<" "<<r<<" "<<len<<"\n";
            rr.push_back(r);
        }
        return s.substr(o/2-(ans-1)/2, ans);
    }
};
