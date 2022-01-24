class Solution {
public:
    int m;
    int pd(int pos,vector<int> &a1, vector<int> &a2)
    {
        cout<<pos<<"\n";
        if(pos>m)return 1;
        if(a2.size()<m-pos)return -1;
        if(pos==m&&a2.size()==0)return 0;
        if(m-pos==a2.size()&&a2[m-pos-1]<=a1[pos])return 0;
        if(m-pos<a2.size()&&a2[m-pos]<a1[pos])return 1;
        if(pos==m||a2[m-pos-1]<=a1[pos])return 0;
        if(a2[m-pos-1]>a1[pos])return -1;
        return 1;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ret=-10000000;
        int n1=nums1.size(),n2=nums2.size(),n=n1+n2;
         m=(n-1)/2;
        int l,r,mid;
        
        l=0,r=n1-1;
        while(l<=r)
        {
            mid=(l+r)>>1;
            int x=pd(mid,nums1,nums2);
            if(x==1)r=mid-1;
            else if(x==0){
                ret=nums1[mid];
                break;
            }
            else l=mid+1;
        }
        l=0,r=n2-1;
        while(l<=r)
        {
            mid=(l+r)>>1;
            int x=pd(mid,nums2,nums1);
            if(x==1)r=mid-1;
            else if(x==0){
                ret=nums2[mid];
                break;
            }
            else l=mid+1;
        }
        if(!(n&1))
        {
            nums1.push_back(1000001);
            nums2.push_back(1000001);
            int p1=upper_bound(nums1.begin(),nums1.end(),ret)-nums1.begin();
            int p2=upper_bound(nums2.begin(),nums2.end(),ret)-nums2.begin();
            if(p1+p2==m+1)ret+=min(nums1[p1],nums2[p2]);
            else ret*=2;
            ret/=2;
        }
        return ret;
    }
};
