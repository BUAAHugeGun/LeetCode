class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ret=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(!j)ret+=grid[i][j];
                if(!i)ret+=grid[i][j];
                if(grid[i][j])ret+=2;
                if(i<n-1)ret+=abs(grid[i][j]-grid[i+1][j]);
                else ret+=grid[i][j];
                if(j<m-1)ret+=abs(grid[i][j]-grid[i][j+1]);
                else ret+=grid[i][j];
            }
        return ret;
    }
};
