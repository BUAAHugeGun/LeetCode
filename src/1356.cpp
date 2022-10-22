class Solution {
public:
    vector<int> a[15];
    inline int js(int x)
    {
        int ret=0;
        while(x)x&=(x-1),ret++;
        return ret;
    }
    vector<int> sortByBits(vector<int>& arr) {
        for(auto &x:arr)a[js(x)].push_back(x);
        for(int i=0;i<=14;i++)sort(a[i].begin(),a[i].end());
        vector<int> ret(arr.size());
        int tot=0;
        for(int i=0;i<=14;i++)for(auto &x:a[i])ret[tot++]=x;
        return ret;
    }
};
