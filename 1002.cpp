class Solution {
public:
    int sum[26];
    int a[26];
    vector<string> commonChars(vector<string>& A) {
        for(auto &c:A[0])sum[c-'a']++;
        for(auto &s:A)
        {
            memset(a,0,sizeof(a));
            for(auto &c:s)a[c-'a']++;
            for(int i=0;i<26;i++)sum[i]=min(sum[i],a[i]);
        }
        vector<string> ret;
        for(int i=0;i<26;i++)
            while(sum[i])ret.push_back((string)""+(char)(i+'a')),sum[i]--;
        return ret;
    }
};
