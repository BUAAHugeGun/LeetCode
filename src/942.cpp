class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n=S.length(),ti=0;
        for(auto &c:S)ti+=(c=='I');
        int st=n-ti,l=st,r=st;
        vector<int> ret(n+1);
        ret[0]=st;
        for(int i=0;i<n;i++)
            if(S[i]=='I')ret[i+1]=++r;
            else ret[i+1]=--l;
        return ret;
    }
};
