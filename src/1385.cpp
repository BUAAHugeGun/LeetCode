class Solution {
public:
    int sum[2020];
    void add(int l,int r)
    {
        l+=1000,r+=1000;
        l=l<0?0:l,r=r>2000?2000:r;
        sum[l]++,sum[r+1]--;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        for(auto &x:arr2)add(x-d,x+d);
        for(int i=1;i<=2000;i++)sum[i]+=sum[i-1];
        int ret=0;
        for(auto &x:arr1)if(sum[x+1000]==0)ret++;
        return ret;
    }
};
