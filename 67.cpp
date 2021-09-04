class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string c;
        int len1=a.length(),len2=b.length(),len=max(len1,len2);
        int ex=0;
        for(int i=0;i<len;i++)
        {
            int x;
            if(i>=len1)x=b[i]-'0';
            else if(i>=len2)x=a[i]-'0';
            else x=a[i]-'0'+b[i]-'0';
            x+=ex;
            ex=x/2;
            x%=2;
            c+=(char)('0'+x);
        }
        if(ex)c+='1';
        reverse(c.begin(),c.end());
        return c;
    }
};
