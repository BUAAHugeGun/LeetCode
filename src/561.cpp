class Solution {
public:
    int sum[20020];
    int arrayPairSum(vector<int>& nums) {
        for(auto &x:nums)sum[x+10000]++;
        int d=0,t;
        int ret=0;
        for(int i=-10000;i<=10000;i++)
        {
            int x=i+10000;
            while(sum[x])
            {
                if(!d)d=1,t=i;
                else ret+=t,d=0;
                sum[x]--;
            }
        }
        return ret;
    }  
};
