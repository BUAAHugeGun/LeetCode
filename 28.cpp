class Solution {
public:
    int pre[50050];
    void getpre(string s)
    {
        int k=-1;pre[0]=-1;
        int n=s.length();
        for(int i=1;i<n;i++)
        {
            while(k!=-1&&s[i]!=s[k+1])k=pre[k];
            if(s[i]==s[k+1])k++;
            pre[i]=k;
        }
    }
    int strStr(string haystack, string needle) {
        if(needle=="")return 0;
        getpre(needle);
        int k=-1;
        int n=haystack.length(),m=needle.length();
        // for(int i=0;i<m;i++)cout<<pre[i]<<" ";
        for(int i=0;i<n;i++)
        {
            while(k!=-1&&haystack[i]!=needle[k+1])k=pre[k];
            if(haystack[i]==needle[k+1])
            {
                k++;
                if(k==m-1)return i-m+1;
            }
        }
        return -1;
    }
};
