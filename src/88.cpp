class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int r1=m-1,r2=n-1;
        for(int i=m+n-1;i>=0;i--)
        {
            if(r1==-1)nums1[i]=nums2[r2--];
            else if(r2==-1)nums1[i]=nums1[r1--];
            else 
            {
                if(nums1[r1]>nums2[r2])nums1[i]=nums1[r1--];
                else nums1[i]=nums2[r2--];
            }
        }
    }
};
