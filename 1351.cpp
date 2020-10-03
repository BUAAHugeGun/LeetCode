class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ret=0;
        int l,r=grid[0].size()-1;
        for(auto &v:grid)if(v[grid[0].size()-1]>=0)continue;
        else 
        {
            int mid;
            l=0;
            while(l<r)
            {
                mid=(l+r)>>1;
                if(v[mid]>=0)l=mid+1;
                else r=mid;
            }
            r=l;
            ret+=v.size()-l;
        }
        return ret;
    }
};
