class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        if(nums.size()==0)return nums;
        int l=0,r=nums.size()-1;
        int temp=nums[l];
        while(1)
        {
            while(l<nums.size()&&(nums[l]&1))l++;
            while(r>=0&&!(nums[r]&1))r--;
            if(l>r)break;
            swap(nums[l],nums[r]);
        }
        return nums;
    }
};
