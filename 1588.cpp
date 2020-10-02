class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ret=0;
        for(int i=0;i<arr.size();i++)
        {
            int l=i+1;
            int r=arr.size()-i;
            ret+=arr[i]*(l*r/2+(l&r&1));
        }
        return ret;
    }
};
