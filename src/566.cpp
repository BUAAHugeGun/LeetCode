class Solution {
public:
    int t1=0,t2=0;
    int get(vector<vector<int>>& nums)
    {
        if(t2==nums[0].size())t1++,t2=0;
        return nums[t1][t2++];
    }
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c!=nums.size()*nums[0].size())return nums;
        vector<vector<int>> ret(r);
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)ret[i].push_back(get(nums));
        return ret;
    }
};
