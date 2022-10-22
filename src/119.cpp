class Solution {
public:
    vector<int> getRow(int k) {
        vector<int> ret(k+1);
        for(int i=0;i<=k;i++)
        {
            ret[i]=1;
            for(int j=i-1;j>=1;j--)ret[j]=ret[j-1]+ret[j];
        }
        return ret;
    }
};
