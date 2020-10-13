class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> ret(S.length());
        int temp=-10001;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]==C)temp=i;
            ret[i]=i-temp;
        }
        temp=20001;
        for(int i=S.length()-1;i>=0;i--)
        {
            if(S[i]==C)temp=i;
            ret[i]=min(ret[i],temp-i);
        }
        return ret;
    }
};
