class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int ed=1;
        for(int i=1;i<nums.size();i++)if(nums[i]!=nums[i-1])
            nums[ed++]=nums[i];
        return ed;
    }
};
