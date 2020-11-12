class Solution {
public:
    int a[287];
    int f(string &s)
    {
        memset(a,0,sizeof(a));
        for(auto &c:s)a[c]++;
        for(auto c='a';c<='z';c++)if(a[c])return a[c];
        return -1;
    }
    int sum[2020];
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        for(int i=0;i<words.size();i++)sum[f(words[i])]++;
        for(int i=1999;i>=0;i--)sum[i]+=sum[i+1];
        vector<int> ret;
        for(auto &s:queries)ret.push_back(sum[f(s)+1]);
        return ret;
    }
};
