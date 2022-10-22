class Solution {
public:
    bool f[33][22];
    bool match(char a,char b)
    {
        return a=='.'||a==b;
    }
    bool isMatch(string s, string p) {
        f[0][0]=1;
        for(int i=0;i<p.length();i++)
        {
            if(p[i]=='*')
                f[i+1][0]|=f[i-1][0];
            for(int j=0;j<s.length();j++)
            {
                if(p[i]=='.')
                    f[i+1][j+1]|=f[i][j];
                else if(p[i]=='*')
                {
                    f[i+1][j+1]|=f[i-1][j+1];
                    if(match(p[i-1],s[j]))
                    {
                        f[i+1][j+1]|=f[i-1][j];
                        f[i+1][j+1]|=f[i+1][j];
                    }
                }
                else if(match(p[i],s[j]))
                    f[i+1][j+1]|=f[i][j];
                // cout<<i<<" "<<j<<" "<<f[i+1][j+1]<<"\n";
            }
        }
        return f[p.length()][s.length()];
    }
};
