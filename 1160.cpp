class Solution {
public:
    int sum[26];
    int a[26];
    int countCharacters(vector<string>& words, string chars) {
        for(auto &x:chars)sum[x-'a']++;
        int ret=0;
        for(auto &s:words)
        {
            memset(a,0,sizeof(a));
            for(auto &c:s)a[c-'a']++;
            bool ok=1;
            for(int i=0;i<26;i++)if(a[i]>sum[i])ok=0;
            ret+=ok?s.length():0;
        }
        return ret;
    }
};
