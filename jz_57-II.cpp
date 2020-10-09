class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        target<<=1;
        vector<vector<int>> ret;
        for(int i=sqrt(target);i>=1;i--)if(target%i==0)
        {
            int a=i,b=target/i;
            vector<int> t;
            if(!((a&1)^(b&1)))continue;
            int r=(a+b-1)>>1;
            int l=(b-a+1)>>1;
            if(l==r)continue;
            for(int j=l;j<=r;j++)t.push_back(j);
            ret.push_back(t);
        }
        return ret;
    }
};
