class NumArray {
public:
    int a[10010];
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            a[i+1]=a[i]+nums[i];
    }
    
    int sumRange(int i, int j) {
        return a[j+1]-a[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
