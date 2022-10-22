class Solution {
public:
    char s[3][22]={"qwertyuiop","asdfghjkl","zxcvbnm"};
    int f[266];
    vector<string> findWords(vector<string>& words) {
        for(int i=0;i<3;i++)
            for(int j=0;j<20;j++)
                if(s[i][j]>='a'&&s[i][j]<='z')
                    f[s[i][j]]=i;
                else break;
        vector<string> ret;
        for(auto &s:words)
        {
            string ss=s;
            for(auto &c:s)if(c<='Z')c=c-'A'+'a';
            int bo=f[s[0]];
            bool ok=1;
            for(int i=1;i<s.length();i++)
                if(f[s[i]]!=bo)
                    ok=0;
            if(ok)ret.push_back(ss);
        }
        return ret;
    }
};
