class Solution {
public:
    int balancedStringSplit(string s) {
        int temp=0,ret=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')temp++;
            else temp--;
            if(!temp)ret++;
        }
        return ret;
    }
};
