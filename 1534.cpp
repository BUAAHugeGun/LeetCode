class Solution {
public:
    int sum[1111];
    inline int getsum(int x)
    {
        if(x<0)return 0;
        if(x>1000)return sum[1000];
        return sum[x];
    }
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ret=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)if(abs(arr[i]-arr[j])<=b)
            {
                int l1=arr[i]-a,r1=arr[i]+a;
                int l2=arr[j]-c,r2=arr[j]+c;
                if(r1<l2||r2<l1)continue;
                int l=max(l1,l2),r=min(r1,r2);
                ret+=getsum(r)-getsum(l-1);
            }
            for(int k=arr[i];k<=1000;k++)sum[k]++;
        }
        return ret;
    }
};
