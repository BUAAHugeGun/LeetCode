class Solution {
public:
    int Max[2][55];
    int projectionArea(vector<vector<int>>& grid) {
        int ret=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                Max[0][i]=max(Max[0][i],grid[i][j]),
                Max[1][j]=max(Max[1][j],grid[i][j]),
                ret+=!!grid[i][j];
        for(int i=0;i<n;i++)ret+=Max[0][i];
        for(int i=0;i<m;i++)ret+=Max[1][i];
        return ret;
    }
};
