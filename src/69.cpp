class Solution {
public:
    int mySqrt(int x) {
        if(x==1)return 1;
        long long l=1,r=x,mid;
        while(l<r)
        {
            mid=(l+r)>>1;
            if(x/mid>=mid)l=mid+1;
            else r=mid;
        }
        return l-1;
    }
};
