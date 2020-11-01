class Solution {
public:
    unordered_map<int,int> mp;
    int sta[1010],top;
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret(nums1.size());
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(top&&sta[top]<nums2[i])top--;
            if(!top)mp[nums2[i]]=-1;
            else mp[nums2[i]]=sta[top];
            sta[++top]=nums2[i];
        }
        for(int i=0;i<nums1.size();i++)ret[i]=mp[nums1[i]];
        return ret;
    }
};
