class Solution {
public:
    int countBinarySubstrings(string s) {
        int a=0,b=1,ret=0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])b++;
            else a=b,b=1;
            if(a>=b)ret++;
        }
        return ret;
    }
};
