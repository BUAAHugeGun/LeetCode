class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp=nums[0],tot=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==temp)tot++;
            else tot--;
            if(tot<0)temp=nums[i],tot=0;
        }
        return temp;
    }
};
