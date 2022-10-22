/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        int l=1,r=1000,mid;
        int xl,xr;
        if(customfunction.f(1,1000)>=z)xl=1;
        else 
        {
            while(l<r)
            {
                mid=(l+r)>>1;
                if(customfunction.f(mid,1000)<z)l=mid+1;
                else r=mid;
            }
            xl=l;
        }

        l=1,r=1000;
        if(customfunction.f(1000,1)<=z)xr=1000;
        else 
        {
            while(l<r)
            {
                mid=(l+r)>>1;
                if(customfunction.f(mid,1)>=z)l=mid+1;
                else r=mid;
            }
            xr=l-1;
        }
        vector<vector<int>> ret;
        int temp=1000;
        vector<int> v(2);
        for(int i=xl;i<=xr;i++)if(temp>0)
        {
            v[0]=i;
            while(temp>0&&customfunction.f(i,temp)>z)temp--;
            if(temp>0&&customfunction.f(i,temp)==z)v[1]=temp,ret.push_back(v);
        }
        return ret;
    }
};
