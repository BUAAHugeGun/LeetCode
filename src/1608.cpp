class Solution {
public:
    int sum[1010];
    inline int getsum(int x)
    {
        return x>=0?sum[x]:0;
    }
    int specialArray(vector<int>& nums) {
        for(auto &x:nums)sum[x]++;
        for(int i=1;i<=1000;i++)sum[i]+=sum[i-1];
        int l=0,r=nums.size(),mid;
        while(l<r)
        {
            mid=(l+r)>>1;
            if(nums.size()-getsum(mid-1)>mid)l=mid+1;
            else r=mid;
        }
        if(nums.size()-getsum(l-1)==l)return l;
        else return -1;
    }
};
