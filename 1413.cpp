class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int Min=0,temp=0;
        for(auto &x:nums)temp+=x,Min=Min>temp?temp:Min;
        return 1-Min;
    }
};
