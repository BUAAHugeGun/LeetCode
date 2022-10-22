class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int r=0;
        for(int i=0;i<nums.size()&&r<nums.size();i++)if(nums[i])r=max(r,i+1);
        else 
        {
            while(r<nums.size()-1&&!nums[r])r++;
            swap(nums[i],nums[r++]);
        }
    }
};
