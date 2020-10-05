class Solution {
public:
    bool check(int x)
    {
        int xx=x;
        while(xx)
        {
            int t=xx%10;
            xx/=10;
            if(!t||x%t)return 0;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        for(int i=left;i<=right;i++)if(check(i))ret.push_back(i);
        return ret;
    }
};
