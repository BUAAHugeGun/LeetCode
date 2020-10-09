class Solution {
public:
    int findMagicIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)if(i==nums[i])return i;
        else if(nums[i]>i)i=nums[i]-1;
        return -1;
    }
};
