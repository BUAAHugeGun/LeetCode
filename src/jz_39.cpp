class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,temp=0;
        for(auto &x:nums)
        {
            temp+=x==ans?1:-1;
            if(temp<=0)ans=x,temp=1;
        }
        return ans;
    }
};
